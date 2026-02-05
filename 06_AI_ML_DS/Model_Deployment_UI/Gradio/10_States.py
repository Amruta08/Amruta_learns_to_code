import gradio as gr

def increment(count):
    new_count = count + 1
    return new_count, new_count # One for display, one for state

def add_message(msg, history):
    history.append(msg)
    return history, "\n".join(history)


with gr.Blocks() as demo:
    
    # Counter example
    gr.Markdown("# Counter example")
    count_state = gr.State(0)
    out = gr.Number(label="Count")
    btn = gr.Button("Increment")
    
    btn.click(
        fn=increment,
        inputs=count_state,
        outputs=[count_state, out]
    )
    
    
    # Text history example
    gr.Markdown("# Text history example")
    state = gr.State([])
    inp = gr.Textbox()
    out = gr.Textbox(lines=5)
    bt = gr.Button("Add")
    
    bt.click(
        fn=add_message,
        inputs=[inp, state],
        outputs=[state, out]
    )
    
    
demo.launch()