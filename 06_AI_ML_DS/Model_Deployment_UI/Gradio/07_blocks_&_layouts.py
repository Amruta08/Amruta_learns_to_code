import gradio as gr

# Interface -> one function -> One UI
# Blocks -> Provides an empty canvas to build the UI yourself

with gr.Blocks() as demo:
    gr.Markdown("# My First Layout")
    
    # Rows -> Horizontal
    with gr.Row():
        gr.Textbox(label="Left")
        gr.Textbox(label="Right")
        
    # Columns -> Vertical
    with gr.Column():
        gr.Textbox(label="Top")
        gr.Textbox(label="Bottom")
        
    # Column inside Row
    with gr.Row():
        with gr.Column():
            gr.Textbox(label="Name")
            gr.Number(label="Age")
        with gr.Column():
            gr.Textbox(label="Output")
    
    
demo.launch()