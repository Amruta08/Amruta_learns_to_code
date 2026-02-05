import gradio as gr

# Every gradio app revolves around these 3 things :-
# 1. A function
# 2. Inputs
# 3. Outputs
# Inputs & outputs can be strings or components

def greet(name):
    return f"Hello {name}"

# Input & outputs as Strings
demo = gr.Interface(
    fn=greet,      # function to call
    inputs="text", # inputs="text" -> Shows a text box and whatever user types -> becomes name parameter for greet function
    outputs="text" # Whatever function returns -> will be displayed as text
)

# Gradio default button behavior :-
# Gradio creates a Submit button -> clicking it runs the function
# Gradio creates a reset button -> clicking it clear's inputs/ouputs

demo.launch()