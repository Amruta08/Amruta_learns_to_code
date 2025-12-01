import streamlit as st

st.title("Counter program without session state")
counter = 0

# Count says only at one and does not update
st.write(f"Counter value: {counter}")

if st.button("Increment Count"):
    counter+=1
    st.write(f"Counter incremented to {counter}")
else:
    st.write(f"Counter says at {counter}")
    
    

# Session state is something that we can use to store values within the same user session
st.title("Counter program with session state")

if "counter" not in st.session_state:
    st.session_state.counter = 0

if st.button("Increment Counter"):
    st.session_state.counter +=1
    st.write(f"Counter incremented to {st.session_state.counter}")

if st.button("Decrement Counter"):
    st.session_state.counter -=1
    st.write(f"Counter decremented to {st.session_state.counter}")

if st.button("Reset"):
    st.session_state.counter = 0
else:
    st.write(f"Counter did not reset")

st.write(f"Counter value: {st.session_state.counter}")
