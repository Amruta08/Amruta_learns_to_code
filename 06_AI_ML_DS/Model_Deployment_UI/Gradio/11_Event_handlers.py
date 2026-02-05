import gradio as gr


def length(text):
    return len(text)


with gr.Blocks() as demo:
    text = gr.Textbox()
    oup = gr.Number()
    oup1 = gr.Number()
    btn = gr.Button("Reset")
    
    
    text.change(length, text, oup) #updates value on text change
    text.submit(length, text, oup1) # Updates value after hitting enter
    btn.click(lambda: "", None, oup) #reset logic
    
    
demo.launch()