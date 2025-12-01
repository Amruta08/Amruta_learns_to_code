import streamlit as st

# Fragments are a way to rerun only certain portion of your user interface
# and better organize or separate out your code
# Use session state to manage data elements within fragments


st.title("Fragments Demo")

@st.fragment()
def toggle_and_text():
    cols = st.columns(2)
    cols[0].toggle("Toggle")
    cols[1].text_area("Enter text")
    #st.rerun(scope="app") -> rerun the whole app
    #st.rerun(scope="fragment") -> rerun only the fragment

@st.fragment()
def filter_and_file():
    cols1 = st.columns(5)
    cols1[0].checkbox("Filter")
    cols1[1].file_uploader("Upload image")
    cols1[2].selectbox("Choose option", ["Option 1", "Option 2", "Option 3"])
    cols1[3].slider("Select value", 0, 100, 50)
    cols1[4].text_input("Enter text")

toggle_and_text()
filter_and_file()

cols = st.columns(2)
cols[0].selectbox("Select", [1,2,3], None, key="new")
cols[1].button("Update")