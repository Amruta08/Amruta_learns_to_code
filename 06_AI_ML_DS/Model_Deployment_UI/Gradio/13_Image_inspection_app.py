import gradio as gr
import cv2
import matplotlib.pyplot as plt

def make_histogram(image_rgb):
    gray = cv2.cvtColor(image_rgb, cv2.COLOR_RGB2GRAY)
    
    fig, ax = plt.subplots()
    ax.hist(gray.ravel(), bins=256, range=(0,256))
    ax.set_title("Pixel Intensity histogram")
    ax.set_xlabel("Intensity")
    ax.set_ylabel("Frequency")
    
    return fig

def process_img(img, operation):
    if img is None:
        return None, None, "Please upload image first"
    
    img_bgr = cv2.cvtColor(img, cv2.COLOR_RGB2BGR) #OpenCv expects BGR
    
    if operation == "Original":
        result = img_bgr
    elif operation == "Grayscale":
        gray = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2GRAY)
        result = cv2.cvtColor(gray, cv2.COLOR_GRAY2BGR)
    elif operation == "Edges":
        gray = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2GRAY)
        min_val = 100
        max_val = 200
        edges = cv2.Canny(gray, min_val, max_val)
        result = cv2.cvtColor(edges, cv2.COLOR_GRAY2BGR)
        
    result_rgb = cv2.cvtColor(result, cv2.COLOR_BGR2RGB)
    fig = make_histogram(result_rgb)
    return result_rgb, fig, "Processing complete"


with gr.Blocks() as demo:
    gr.Markdown("# Image Inspection Tool")
    gr.Markdown("Upload an image and apply simple visual analysis.")
    
    with gr.Row():
        image_input = gr.Image(type="numpy", label="Upload Image")
        image_output = gr.Image(label="Processed Image")
        
    operation = gr.Dropdown(
        choices=["Original", "Grayscale", "Edges"],
        label="Operation"
    )
    
    run_btn = gr.Button("Run")
    status = gr.Textbox(label="Status", interactive=False)
    histogram = gr.Plot(label="Image Histogram")
    run_btn.click(
        fn=process_img,
        inputs=[image_input, operation],
        outputs=[image_output, histogram, status]
    )
    
demo.launch()