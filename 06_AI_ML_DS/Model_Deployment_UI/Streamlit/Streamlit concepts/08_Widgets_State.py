import streamlit as st

# 1.
# key refers to a unique identifer used to access values in an object
st.button("Ok")
st.button("Ok", key="btn2") # Without adding key, this would throw DuplicateElementId error


# 2.
# Maintaining state of 2nd slider
if "slider" not in st.session_state:
    st.session_state.slider = 25

min_value = st.slider("Set min value", 0, 50, 25)
st.session_state.slider = st.slider("Slider", min_value, 100, st.session_state.slider)


# 3.
# if a widget is not longer rendered on screen, then its state is destroyed
# Maintaining the state of the text_input 

if "checkbox" not in st.session_state:
    st.session_state.checkbox = False
    
if "user_input" not in st.session_state:
    st.session_state.user_input = ""

def toggle_input():
    st.session_state.checkbox = not st.session_state.checkbox
    
st.checkbox("Show Input Field", value=st.session_state.checkbox, on_change=toggle_input)

if st.session_state.checkbox:
    user_input = st.text_input("Enter name", value=st.session_state.user_input)
    st.session_state.user_input = user_input
else:
    user_input = st.session_state.get("user_input", "")

st.write(f"User Input:{user_input}")
