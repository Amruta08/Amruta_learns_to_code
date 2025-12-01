import streamlit as st
import pandas as pd
import numpy as np

def intro():
    st.write("Intro Page")


def page1():
    st.write("Page 1")
    

def page2():
    st.write("Page 2")
    

def page3():
    st.write("Page 3")
    
# Dictionary to map page names to function
page_name_to_func = {
    "-":intro,
    "Page 1": page1,
    "Page 2": page2,
    "Page 3": page3
}

# Sidebar for page navigation
selected_page = st.sidebar.selectbox("Choose a page", options=page_name_to_func.keys())

# Run the function associated with the selected page
page_name_to_func[selected_page]()