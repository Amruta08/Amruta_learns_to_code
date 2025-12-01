import streamlit as st
import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

# ----------------------------------
## st.write() magic :- 
# Automatically formats properly anything you give it
# ----------------------------------

# Displayed as text
st.write("Hello world") 

# Displayed as H2
st.write("## This is a H2 Title!")

# Displayed as object
st.write({"key":"value"})

# Displayed as boolean
st.write(False)

# Displayed as dataframe
df = pd.read_csv("heart.csv")
st.write(df)


# ----------------------------------
## Streamlit also supports inline expressions :-
# ----------------------------------

# Displays 7
3 + 4  

# Displays "text 2"
"text 1" if False else "text 2"


# ----------------------------------
## Streamlit Data flow
# ----------------------------------
'''
Note :- Anytime something must be updated on the screen, 
Streamlit reruns your entire script from top to bottom.
'''

# When the button is pressed, app will rerun and display true
pressed = st.button("Press me")
st.write(pressed)

# When you click this button the o/p of 1st button will show false and vice versa
clicked = st.button("Click here")
st.write(clicked)


# ----------------------------------
## Streamlit Text Elements 
# ----------------------------------

# Title element
st.title("Title element")

# header element
st.header("Header element")

# Subheader element
st.subheader("Subheader element")

# Markdown 
st.markdown("This **is** _a_ `Markdown`")

# Caption
st.caption("small text")

# Display code
code1 = """
def greet(name):
    print("Hello", name)
"""
st.code(code1, language="python")

# add a divider line
st.divider()


# ----------------------------------
## Streamlit Image Elements 
# Create a folder by the name of "static" in your project directory and store your images there
# ----------------------------------

# Display image and specify path to image using os library
st.image(os.path.join(os.getcwd(), "static", "flower-img.jpg"))


# ----------------------------------
## Streamlit Data Elements 
# ----------------------------------

# Display a dataframe
df = pd.DataFrame({
    'Name':['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [25, 32, 37, 45],
    'Occupation':['Engineer', 'Doctor', 'Artist', 'Chef']
})
st.dataframe(df)

# Editable dataframe
editable_df = st.data_editor(df)

# Display dataframe as a static table
st.table(df)

# Display metrics about our dataframe
st.metric(label="Total rows", value=len(df))
st.metric(label="Average age", value=round(df['Age'].mean(), 1))

# Display json
json_element = {
    "name": "Alice",
    "age": 23,
    "skills":["Python", "Data Science", "Machine Learning"]
}
st.json(json_element)


# ----------------------------------
## Streamlit Chart Elements 
# ----------------------------------

# Generate sample data
chart_data = pd.DataFrame(
    np.random.randn(20, 3),
    columns=['A','B','C']
)

# Area chart
st.area_chart(chart_data)

# Bar chart
st.bar_chart(chart_data)

# Line chart
st.line_chart(chart_data)

# Scatter plot
scatter_data = pd.DataFrame({
    'x':np.random.randn(100),
    'y':np.random.randn(100)
})

st.scatter_chart(scatter_data)

# Displays points on a map
map_data = pd.DataFrame(
    np.random.randn(100, 2) / [50, 50] + [19.0760, 72.8777],
    columns=['lat', 'lon']
)
st.map(map_data)

# Matplolib chart
fig, ax = plt.subplots()
ax.plot(chart_data['A'], label='A'),
ax.plot(chart_data['B'], label='B'),
ax.plot(chart_data['C'], label='C'),
ax.set_title("Pyplot Line chart")
ax.legend()
st.pyplot(fig)

# Seaborn chart
fig, ax = plt.subplots()
sns.scatterplot(x=scatter_data["x"], y=scatter_data["y"], ax=ax)
ax.set_title("Scatter plot")
st.pyplot(fig)


