from fastapi import FastAPI, Depends
from sqlalchemy import create_engine, Column, Integer, String, Text, DateTime, Boolean
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker, Session
from pydantic import BaseModel, EmailStr, ConfigDict
from datetime import datetime
from typing import List
from sqlalchemy import or_

# Database setup
DATABASE_URL = "sqlite:///./emails.db"

# Connect to db
engine = create_engine(
    DATABASE_URL,
    connect_args={"check_same_thread": False}
)

# Creates session (temporary connection to the db)
SessionLocal = sessionmaker(
    bind=engine,
    autocommit=False,
    autoflush=False
)

# Parent class for database tables
Base = declarative_base()

# SQLALchemy model
class Email(Base):
    __tablename__ = "emails"

    id = Column(Integer, primary_key=True, index=True)
    sender = Column(String, default="default@demo.com")
    recipient = Column(String, nullable=False)
    subject = Column(String, nullable=False)
    body = Column(Text, nullable=False)
    timestamp = Column(DateTime, default=datetime.utcnow)
    read = Column(Boolean, default=False)


# Pydantic schemas for emails
class EmailCreate(BaseModel):
    recipient: EmailStr
    subject: str
    body: str


class EmailOut(BaseModel):
    id: int
    sender: EmailStr
    recipient: EmailStr
    subject: str
    body: str
    timestamp: datetime
    read: bool
    
    # Allows Pydantic to convert SQLAlchemy ORM objects into API response models by reading object attributes directly.
    model_config = ConfigDict(from_attributes=True)


# FastAPI app
app = FastAPI(title="Simple Email Server")


# Database dependency
def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()


# Create tables
Base.metadata.create_all(bind=engine)


# Preload sample emails
@app.on_event("startup")
def preload_emails():
    db = SessionLocal()
    
    # Delete existing emails
    db.query(Email).delete()
    
    # Sample emails
    sample_emails = [
        Email(
            sender="boss@email.com",
            recipient="you@email.com",
            subject="Quarterly Report",
            body="Please finalize the report ASAP.",
            read=False
        ),
        Email(
            sender="alice@work.com",
            recipient="you@email.com",
            subject="Lunch?",
            body="Free for lunch today?",
            read=False
        ),
        Email(
            sender="eric@work.com",
            recipient="you@email.com",
            subject="Happy Hour",
            body="We're planning drinks this Friday!",
            read=False
        ),
        Email(
            sender="bob@work.com",
            recipient="you@email.com",
            subject="Code Review",
            body="I left some comments on your PR.",
            read=False
        ),
    ]
    
    # Insert sample emails
    db.add_all(sample_emails)
    db.commit()
    db.close()
    
    

# Backend routes


# Send Email
@app.post("/send", response_model=EmailOut)
def send_email(email: EmailCreate, db: Session = Depends(get_db)):
    new_email = Email(
        sender="you@email.com",
        recipient=email.recipient,
        subject=email.subject,
        body=email.body,
        read=False
    )
    
    db.add(new_email)
    db.commit()
    db.refresh(new_email)
    return new_email


# List all Emails
@app.get("/emails", response_model=List[EmailOut])
def list_emails(db: Session = Depends(get_db)):
    return db.query(Email).order_by(Email.timestamp.desc()).all()


# Search Emails
@app.get("/emails/search", response_model=List[EmailOut])
def search_emails(q: str, db: Session = Depends(get_db)):
    return db.query(Email).filter(
        or_(
            Email.subject.ilike(f"%{q}%"),
            Email.body.ilike(f"%{q}%"),
            Email.sender.ilike(f"%{q}%")
        )
    ).order_by(Email.timestamp.desc()).all()


# List Unread Emails
@app.get("/emails/unread", response_model=List[EmailOut])
def unread_emails(db: Session = Depends(get_db)):
    return db.query(Email).filter(
        Email.read == False
    ).order_by(Email.timestamp.desc()).all()


# Filter emails
@app.get("/emails/filter", response_model=List[EmailOut])
def filter_emails(recipient: str = None, start_date: str = None, end_date: str = None, db: Session = Depends(get_db)):
    query = db.query(Email)
    
    if recipient:
        query = query.filter(
            Email.recipient == recipient
        )
    
    if start_date:
        start = datetime.fromisoformat(start_date)
        query = query.filter(
            Email.timestamp >= start
        )
    
    if end_date:
        end = datetime.fromisoformat(end_date)
        query = query.filter(
            Email.timestamp <= end
        )
    
    return query.order_by(Email.timestamp.desc()).all()


# Reset Database
@app.get("/reset_database")
def reset_database():
    preload_emails()
    return {"message": "Database reset"}


# Get Email by ID
@app.get("/emails/{email_id}", response_model=EmailOut)
def get_email(email_id: int, db: Session = Depends(get_db)):
    return db.query(Email).filter(
        Email.id == email_id
    ).first()


# Mark as Read
@app.patch("/emails/{email_id}/read", response_model=EmailOut)
def mark_read(email_id: int, db: Session = Depends(get_db)):
    email = db.query(Email).filter(
        Email.id == email_id
    ).first()
    
    email.read = True
    db.commit()
    db.refresh(email)
    
    return email


# Mark as Unread
@app.patch("/emails/{email_id}/unread", response_model=EmailOut)
def mark_unread(email_id: int, db: Session = Depends(get_db)):
    email = db.query(Email).filter(
        Email.id == email_id
    ).first()
    
    email.read = False
    db.commit()
    db.refresh(email)
    
    return email


# Delete Email
@app.delete("/emails/{email_id}")
def delete_email(email_id: int, db: Session = Depends(get_db)):
    email =  db.query(Email).filter(
        Email.id == email_id
    ).first()
    
    db.delete(email)
    db.commit()
    
    return {"message": "Email deleted"}





    