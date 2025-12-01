import streamlit as st


st.title("Counter Example")

if "count" not in st.session_state:
    st.session_state.count = 0

def increment_and_rerun():
    st.session_state.count +=1
    st.rerun()  

#Without rerun(), count value will not get updated immediately and will lag by 1
st.write(f"Current Count: {st.session_state.count}")

if st.button("Increment and Update Immediately"):
    increment_and_rerun()

