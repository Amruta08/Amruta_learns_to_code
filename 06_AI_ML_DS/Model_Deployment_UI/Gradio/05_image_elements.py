import gradio as gr

def image_demo(img):
    return img

demo = gr.Interface(
    fn=image_demo,
    inputs=gr.Image(type="numpy", label="Upload image"),
    outputs=gr.Image(label="Output image")
)

demo.launch()