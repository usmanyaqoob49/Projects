import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

s.connect(("127.0.0.1",6061))

while(1):
    msg = s.recv(2048)
    print("Message Recieved: \n",msg.decode())