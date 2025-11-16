# Command to execute :- streamlit run mortgage_calculator.py
import streamlit as st
import pandas as pd
import matplotlib.pyplot as plt
import math

# 1. App title :-
st.title("Mortgage Repayments Calculator")

# 2. User input :-
st.write("### Input Data :-")
col1, col2 = st.columns(2)  # 2 columns layout
home_value = col1.number_input("Home Value", min_value=0, value=500000)
deposit = col1.number_input("Deposit", min_value=0, value=100000)
interest_rate = col2.number_input("Interest Rate (in %)", min_value=0.0, value=5.5)
loan_term = col2.number_input("Loan Terms (in years)", min_value=1, value=30)

# 3. Calculate the repayments :-
loan_amount = home_value - deposit
monthly_interest_rate = (interest_rate/100)/12
number_of_payments = loan_term*12

# EMI = P * (r * (1 + r)**n) / ((1 + r)**n - 1), where P = loan amount, r = monthly interest rate, n = number of payments
monthly_payment = (loan_amount
*(monthly_interest_rate*(1+monthly_interest_rate)**number_of_payments)
/((1+monthly_interest_rate)**number_of_payments-1)
)

total_payments = monthly_payment*number_of_payments
total_interest = total_payments - loan_amount

# 4. Display the 3 stats in 1 row (3 cols) layout  :-
st.write("###Repayments")
col1, col2, col3 = st.columns(3)
col1.metric(label="Monthly Repayments", value=f"${monthly_payment:,.2f}")
col2.metric(label="Total Repayments", value=f"${total_payments:,.0f}")
col3.metric(label="Total Interest", value=f"${total_interest:,.0f}")

# 4. Create a data frame with the payment schedule :-
schedule = []
remaining_balance = loan_amount

for i in range(1, number_of_payments+1):
    interest_payment = remaining_balance * monthly_interest_rate
    principal_payment = monthly_payment - interest_payment
    remaining_balance -= principal_payment
    remaining_balance = round(remaining_balance, 2)
    year = math.ceil(i/12) # Calculate the year based on the month
    schedule.append(
        [
            year,
            i,
            monthly_payment,
            principal_payment,
            interest_payment,
            remaining_balance,
        ]
    )

df = pd.DataFrame(
    schedule,
    columns=["Year", "Month", "Payment", "Principal", "Interest", "Remaining Balance"],
) 

# 5. Display the data frame as a chart :-
st.write("### Payment Schedule :-")  
payments_df = df[["Year", "Remaining Balance"]].groupby("Year").min()  # groupby min. for end of the year balance
st.line_chart(payments_df)
st.write(df)
