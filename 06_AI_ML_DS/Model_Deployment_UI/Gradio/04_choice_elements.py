import gradio as gr

def choice_model(model, confidence, normalize):
    return f"{model} | {confidence} | normalize={normalize}"

# Gradio choice elements -> Dropdown, slider, checkbox
demo = gr.Interface(
    fn=choice_model,
    inputs=[
        gr.Dropdown(["SVM", "LR", "CNN"], label="Model"),
        gr.Slider(0, 1, step=0.1, label="Confidence"),
        gr.Checkbox(label="Normalize?")
    ],
    outputs=gr.Textbox(label="Summary")
)

demo.launch()