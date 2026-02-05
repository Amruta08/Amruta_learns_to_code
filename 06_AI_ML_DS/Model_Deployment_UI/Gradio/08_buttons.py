import gradio as gr

def greet(name):
    return f"Hello {name}"

def upper(text):
    return text.upper()

def lower(text):
    return text.lower()

with gr.Blocks() as demo:
    
    gr.Markdown("# Implicit function binding")
    # Implicit function binding like in gr.Interface(fn=..., inputs=..., outputs=...)
    name = gr.Textbox(label="Name")
    out = gr.Textbox(label="Greeting")
    btn = gr.Button("Submit")
    
    btn.click(
        fn=greet,
        inputs=name,
        outputs=out
    )
    
    gr.Markdown("# Multiple actions")
    # Multiple actions
    with gr.Row():
        txt = gr.Textbox(label="Input text")
        out = gr.Textbox(label="Output")
    
    with gr.Row():
        gr.Button("UPPER").click(upper, txt, out)
        gr.Button("lower").click(lower, txt, out)

demo.launch()