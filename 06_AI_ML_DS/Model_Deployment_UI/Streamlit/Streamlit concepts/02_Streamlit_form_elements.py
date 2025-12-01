import streamlit as st
import pandas as pd

# Will avoid reruning the code everytime a single form element changes its state
with st.form(key="Sample_form"):
    
    # Text input
    name = st.text_input("Enter your name")
    feedback = st.text_area("Provide your feedbacks")
    
    # Data and time inputs
    dob = st.date_input("Select your DOB")
    time = st.time_input("Choose a preferred time")
    
    # Selectors
    choice = st.radio("choose an option", ['Option 1', 'Option 2', 'Option 3'])
    gender = st.selectbox("Select your gender", ['Male', 'Female', 'Prefer not to say'])
    slider_value = st.select_slider("Select a range", options=[1, 2, 3, 4, 5])
    
    # Toggles and checkboxes
    notifications = st.checkbox("Receive notifications")
    toggle_value = st.checkbox("Enable dark mode ?", value=False)
    
    # Submit button
    submit_button = st.form_submit_button(label="Submit")
   
    
# Display the User input
st.subheader("Form Feedback")
st.write(f'Thank you, {name}!')
st.write(f'Date of birth: {dob}')
st.write(f'Preferred Time: {time}')
st.write(f'Your choice: {choice}')
st.write(f'Gender: {gender}')
st.write(f'Notifications: {"Yes" if notifications else "No"}')
st.write(f'Dark mode: {"Enabled" if toggle_value else "Not Enabled"}')