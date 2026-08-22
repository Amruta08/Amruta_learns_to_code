# Import the  socket module
import socket as sc

# Create a socket object for server
s = sc.socket(sc.AF_INET, sc.SOCK_STREAM)

# Bind the server socket to an address
s.bind(("127.0.0.1", 9999))

# Listen and look for connections made to the socket
print("Waiting for connections")
s.listen(1)

# Accept client's connection & returns a pair of (conn, address)
# conn - new socket object which can be used to send & recieve data on that connection
# address - address bound to the socket on other end of the communication
conn, addr = s.accept()
print("Connected to, ", addr)
print(f"conn is {conn} & addr is {addr}")

# Transmit a TCP message to the client with utf-8 encoding
message = "hi"
conn.send(message.encode('utf-8'))

# Close the socket connection
conn.close()
