import streamlit as st
import time



# Example 1 :- Cache data from an API

### Simmulate a slow data-fetching process :-
# Cache this data for 60 seconds
@st.cache_data(ttl=60)
def fetch_data():
    time.sleep(3) #Delay to mimic an API call
    return {"data": "This is cached data!"}

st.write("Fetching data...")
data = fetch_data()
st.write(data)



# Example 2 :- Cache a file resource

file_path = "file.txt"

# Cache the file throughout the execution of the program
@st.cache_resource
def get_file_handler():
    file = open(file_path, "a+")
    return file

# Use the cached file handler
file_handler = get_file_handler()

# Write to the file
if st.button("Write to File"):
    file_handler.write("New line of text\n")
    file_handler.flush()
    st.success("Wrote a new line to the file")

# Read and display the file contents
if st.button("Read File"):
    file_handler.seek(0)
    content = file_handler.read()
    st.text(content)

# Close the file
st.button("Close File", on_click=file_handler.close)