import streamlit as st
from datetime import datetime

st.title("User Information Form")

form_values = {
    "name":None,
    "age":None,
    "gender":None,
    "dob":None
}

min_date = datetime(1990, 1, 1)
max_date = datetime.now()

with st.form(key="user_info_form"):
    form_values["name"] = st.text_input("Enter your name: ")
    form_values["age"] = st.number_input("Enter your age")
    form_values["gender"] = st.selectbox("Gender", ["Male", "Female"])
    form_values["dob"] = st.date_input("Enter your DOB", min_value=min_date, max_value=max_date)
    
    submit_button = st.form_submit_button(label="Submit")
    
    # Display warning if all fields are not filled else display ballons and then the entered fields
    if submit_button:
        if not all(form_values.values()):
            st.warning("Please fill in all the fields")
        else:
            st.balloons()
            st.write("### Info")
            for (key, value) in form_values.items():
                st.write(f"{key}: {value}")
    