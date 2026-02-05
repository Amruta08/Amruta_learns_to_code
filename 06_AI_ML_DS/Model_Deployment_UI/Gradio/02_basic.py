import gradio as gr

# Every gradio app revolves around these 3 things :-
# 1. A function
# 2. Inputs
# 3. Outputs
# Inputs & outputs can be strings or components

def greet(name):
    return f"Hello {name}"

# Input & outputs as components
demo = gr.Interface(
    fn=greet,      # function to call
    inputs=gr.Textbox(label="Your name"), # -> Shows a text box with "Your name" label
    outputs=gr.Textbox(label="Greeting") # -> Displays output as a text box with "Greeting" label
)

# Gradio default button behavior :-
# Gradio creates a Submit button -> clicking it runs the function
# Gradio creates a reset button -> clicking it clear's inputs/ouputs

demo.launch()