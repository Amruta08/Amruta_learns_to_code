import gradio as gr
import matplotlib.pyplot as plt

def chart_demo():
    fig, ax = plt.subplots()
    ax.plot([1,2,3], [10,20,15])
    ax.set_title("Demo Chart")
    return fig

demo = gr.Interface(
    fn=chart_demo,
    inputs=None,
    outputs=gr.Plot()
)

demo.launch()