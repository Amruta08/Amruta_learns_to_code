import gradio as gr
import pandas as pd

def show_data():
    df = pd.DataFrame({
        "Feature":["Height", "Weight", "Age"],
        "Value":[170, 65, 23]
    })
    return df

def process_df(df):
    return df.describe()

def add_row(new_row, state_df):
    state_df = pd.concat([state_df, new_row])
    return state_df, state_df # One for input, one for state

with gr.Blocks() as demo:
    
    gr.Markdown("# Display Dataframe")
    btn = gr.Button("Display DataFrame")
    btn.click(
        fn=show_data,
        inputs=None,
        outputs=gr.Dataframe()
    )
    
    gr.Markdown("# Edit Dataframe")
    inputs = gr.Dataframe(type="pandas")
    outputs = gr.Dataframe()
    btn1 = gr.Button("View Summary")
    btn1.click(process_df, inputs, outputs)
    
    gr.Markdown("# Add column")
    state = gr.State(pd.DataFrame(columns=["A", "B"]e))
    df_out = gr.Dataframe()
    
    btn = gr.Button("Add dummy row")
    btn.click(
        add_row,
        inputs=[gr.Dataframe(type="pandas"), state],
        outputs=[state, df_out]
    )
    
    
demo.launch()