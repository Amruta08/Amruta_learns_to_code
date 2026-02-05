import gradio as gr

with gr.Blocks() as demo:
    with gr.Tab("Text"):
        gr.Textbox()
    with gr.Tab("Image"):
        gr.Image()
        
demo.launch()