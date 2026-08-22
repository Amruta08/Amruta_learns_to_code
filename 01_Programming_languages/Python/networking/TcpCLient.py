# Import the module
import socket

# Create a socket object for client
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connects to a remote socket at an address
s.connect(("127.0.0.1", 9999))
print("Connected")

# Recive a TCP message, with client's buffer size set to 1024, then decode it and display it
data = s.recv(1024)
data = data.decode()
print("Server sent, ", data) 

# Close the socket connection
s.close()