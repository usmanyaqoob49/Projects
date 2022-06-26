#serverCode
import socket
#SOCK_STREAM for the TCP and SOCK_DGRAM for UDP
#AF_INET us for IPv4

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#bind will bind the ip and port no with above socket
        #ip         #port no
#we can use socket.gethostname() to get the local host address
s.bind(('127.0.0.1',6061))
#server starts  waiting for the connection of client-
s.listen()

while(1):
    #server accept the connection from the client
    #accept() returns two things
    #socker and address
    clientSocket, address = s.accept()
    while(1):
        msg = input("Enter Your message: ")
        print("\n Connection established from address. ",address)
                                            #encoding scheme
        clientSocket.send(bytes(msg,'utf-8'))
        if (msg == 'End'):
            break
    clientSocket.close()