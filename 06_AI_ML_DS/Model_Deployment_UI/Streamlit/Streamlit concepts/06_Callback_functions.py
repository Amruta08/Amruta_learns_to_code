import streamlit as st


# Without callbacks, the flow of the below program is not smooth :-
if "step" not in st.session_state:
    st.session_state.step = 1
    
if "info" not in st.session_state:
    st.session_state.info = {}

if st.session_state.step == 1:
    st.header("Part 1: Info")
    name = st.text_input("Name", value=st.session_state.info.get("name", ""))
    
    if st.button("Next"):
        st.session_state.info["name"] = name
        st.session_state.step = 2
        
if st.session_state.step == 2:
    st.header("Part 2: Review")
    st.subheader("Please review this")
    st.write(f"**Name**:{st.session_state.info.get('name', '')}")
    
    if st.button("Submit"):
        st.success("Great!")
        st.balloons()
        st.session_state.info =  {}
    
    if st.button("back"):
        st.session_state.step = 1


# With callbacks, the flow of the program becomes smooth :-
if "step" not in st.session_state:
    st.session_state.step = 1
    
if "info" not in st.session_state:
    st.session_state.info = {}

def go_to_step2(name):
    st.session_state.info["name"] = name
    st.session_state.step = 2
    
def got_to_step1():
    st.session_state.step = 1

if st.session_state.step == 1:
    st.header("Part 1: Info")
    name = st.text_input("Name", value=st.session_state.info.get("name", ""))
    
    # Callbacks run before any other code on the next rerun
    st.button("Next", on_click=go_to_step2, args=(name,)) #go_to_step2 is a callback function here
        
if st.session_state.step == 2:
    st.header("Part 2: Review")
    st.subheader("Please review this")
    st.write(f"**Name**:{st.session_state.info.get('name', '')}")
    
    if st.button("Submit"):
        st.success("Great!")
        st.balloons()
        st.session_state.info =  {}
    
    st.button("back", on_click=got_to_step1) #go_to_step1 is a callback function here

