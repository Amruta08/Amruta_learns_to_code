# Python's socket library provides various methods & classes to create a network interface
import socket as sc

# create socket
# sc.socket(socket_family,socket_type,protocol=0)
# socket_family = AF_INET     # AF_INET  or AF_UNIX
# socket_type = SOCK_STREAM   #  SOCK_STREAM  for tcp & SOCK_DGRAM for Udp
# protocol = 0  #  By default is 0

# CREATE TCP SOCKET
TcpSocketObj = sc.socket(sc.AF_INET, sc.SOCK_STREAM)

# CREATE UDP SOCKET
UdpSocketObj = sc.socket(sc.AF_INET, sc.SOCK_DGRAM)

# Socket Methods :- 

# Server socket methods :-
# bind(hostname, port_number)  ->  binds socket to an address
# listen() -> sets up & starts a TCP/UDP listener & listens for connection made to the socket
# accept() -> accepts tcp/udp client connection & waits until a connection arrives

# CLient socket,
# connect(hostname, port_number) -> connects to a remote socket at an address 

# general socket
# recv()/recvfrom() -> recevie a tcp/udp message
# send()/sendto() -> Transmits tcp/udp message
# close() -> close socket connection 
# gethostname()  -> Returnshostname of machine where python interpreter is currently executing

# Create a network socket connection :-
# 1. Create server socket
# 2. Create client socket
# 3. Use server & client methods respectively to create a connection
# 4. Use general methods to make server & client interact
