import gradio as gr


def text_demo(name, age):
    return f"Hello {name}", age

# Gradio text elements -> Text, numbers
demo = gr.Interface(
    fn=text_demo,
    inputs=[
        gr.Textbox(label="Name"),
        gr.Number(label="Age")
    ],
    outputs=[
        gr.Textbox(label="Greeting"),
        gr.Number(label="Age")
    ]
)

demo.launch()