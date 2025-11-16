import streamlit as st
import pandas as pd
import numpy as np

# Basic I/O
st.write("Hello World")
X = st.text_input("Favourite Moview?")
st.write(f"Your favourite movie is: {X}")

is_clicked = st.button("Click Me")
st.write("## This is a H2 Title!")

# Display dataframe
df = pd.read_csv("heart.csv")
st.write(df)

# Show data in graph
chart_data = pd.DataFrame(
    np.random.randn(20, 3),
    columns=["a", "b", "c"]
)
st.bar_chart(chart_data)
st.line_chart(chart_data)

# Adding links
st.link_button("Profile", url="/profile")
st.link_button("Profile", url="/profile?id=1234")
