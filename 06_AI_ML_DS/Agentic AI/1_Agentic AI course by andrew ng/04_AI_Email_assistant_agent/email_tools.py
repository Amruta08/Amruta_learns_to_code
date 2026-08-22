import requests

BASE_URL = "http://127.0.0.1:8000"


def send_email(recipient: str, subject: str, body: str):
    response = requests.post(f"{BASE_URL}/send",
        json={
            "recipient": recipient,
            "subject": subject,
            "body": body
        }
    )
    return response.json()


def get_email(email_id: int):
    response = requests.get(f"{BASE_URL}/emails/{email_id}")
    return response.json()


def list_all_emails():
    response = requests.get(f"{BASE_URL}/emails")
    return response.json()


def search_emails(query: str):
    response = requests.get(f"{BASE_URL}/emails/search",
        params={"q":query}
    )
    return response.json()


def delete_email(email_id: int):
    response = requests.delete(f"{BASE_URL}/emails/{email_id}",)
    return response.json()


def list_unread_emails():
    response = requests.get(f"{BASE_URL}/emails/unread")
    return response.json()


def filter_emails():
    return 0


def mark_email_as_read(email_id: int):
    response = requests.patch(f"{BASE_URL}/emails/{email_id}/read")
    return response.json()


def mark_email_as_unread(email_id: int):
    response = requests.patch(f"{BASE_URL}/emails/{email_id}/unread")
    return response.json()


def search_unread_from_sender(sender_email: str):
    unread_emails = list_unread_emails()
    filtered_emails = []
    
    for email in unread_emails:
        if email["sender"].lower() == sender_email.lower():
            filtered_emails.append(email)
            
    return filtered_emails


def filter_emails(recipient: str = None, start_date: str = None, end_date: str = None):
    params = {}
    
    if recipient:
        params["recipient"] = recipient
    
    if start_date:
        params["start_date"] = start_date
    
    if end_date:
        params["end_date"] = end_date
    
    response = requests.get(f"{BASE_URL}/emails/filter",
        params=params
    )
    
    return response.json()