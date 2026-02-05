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
        return None, None
    
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
    return result_rgb, fig

def parse_operation(message):
    msg = message.lower()
    if "gray" in msg:
        return "Grayscale"
    if "edge" in msg:
        return "Edges"
    if "original" in msg:
        return "Original"
    return None

def chat_handler(message, history, image):
    if image is None:
        history.extend([
            {"role": "user", "content": message},
            {"role": "assistant", "content": "⚠️ Please upload an image first."}
        ])
        return history, history, image, None # One history for state, One history for chatbot
    operation = parse_operation(message)
    
    if operation is None:
        history.extend([
            {"role": "user", "content": message},
            {"role": "assistant", "content": "❓ Try: original, grayscale, or edges."}
        ])
        return history, history, image, None
    
    processed_img, fig = process_img(image, operation)
    
    history.extend([
        {"role": "user", "content": message},
        {"role": "assistant", "content": f"✅ Applied {operation} operation."}
    ])
    
    return history, history, processed_img, fig

with gr.Blocks() as demo:
    gr.Markdown("# Image Inspection Chatbot")
    gr.Markdown("Upload an image, then chat commands like:\n"
        "- *show grayscale*\n"
        "- *detect edges*\n"
        "- *original image*")
    
    with gr.Row():
        image_input = gr.Image(type="numpy", label="Upload Image")
        image_output = gr.Image(label="Processed Image")
    
    chatbot = gr.Chatbot(label="Inspector Bot")
    chat_state = gr.State([])
    chat_input = gr.Textbox(
        placeholder="Type a command and press Enter…"
    )
    
    histogram = gr.Plot(label="Image Histogram")
    
    chat_input.submit(
        fn=chat_handler,
        inputs=[chat_input, chat_state, image_input],
        outputs=[chat_state, chatbot, image_output, histogram]
    )
    

demo.launch()
