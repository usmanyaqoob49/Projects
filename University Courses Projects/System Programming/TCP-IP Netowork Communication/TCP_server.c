#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <error.h>

int main()
{
    int socket_desc, client_sock, client_size;

     // creating client and server's socket address input structures
    struct sockaddr_in server_addr, client_addr;
   
    // Buffers/Arrays for storing client and servers messages
    char server_message[2000], client_message[2000];
    
    // Clean buffers:
    memset(server_message, '\0', sizeof(server_message));
    memset(client_message, '\0', sizeof(client_message));
    
    // Create socket: / socket() returns a socket descriptor for the new socket, or -1 for errors 
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);
    
    //Error check for socket creation
    if(socket_desc < 0){
        perror("Error while creating socket: \n");
        return -1;
    }
    printf("Socket created successfully\n");
    printf("Socket Discriptor: %i\n",socket_desc);
    
    // Set port and IP:
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(2000);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    
    // Bind to the set port and IP:
    int bindreturn = bind(socket_desc, (struct sockaddr*)&server_addr, sizeof(server_addr));

    if(bindreturn<0){
        perror("Couldn't bind to the port: \n");
        return -1;
    }
    printf("Done with binding\n");
    
    // Listen for clients:
    int listenReturn = listen(socket_desc, 1); 

    if(listenReturn < 0){
        perror("Error while listening: \n");
        return -1;
    }
    printf("\nListening for incoming connections.....\n");
    
    // Accept an incoming connection:
    client_size = sizeof(client_addr);
    client_sock = accept(socket_desc, (struct sockaddr*)&client_addr, &client_size);
    
    if (client_sock < 0){
        perror("Can't accept: \n");
        return -1;
    } 
    printf("Client Socket socket's dercriptor: %i\n",client_sock);
    printf("Client connected at IP: %s and port: %i\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));
    
    // Receive client's message:
    int recvReturn = recv(client_sock, client_message, sizeof(client_message), 0);
    if ( recvReturn < 0){
        perror("Couldn't receive: \n");
        return -1;
    }
    printf("\nMsg from client: %s\n", client_message);
    
    // Respond to client:
    strcpy(server_message, "This is the server's message.");
    
    if (send(client_sock, server_message, strlen(server_message), 0) < 0){
        printf("Can't send\n");
        return -1;
    }
    
    // Closing the socket:
    int closeReturn1 = close(client_sock);
    if(closeReturn1 <0){
        perror("\nClosing client_socket Error: ");
    }
    printf("\nClient Socket Closed Successfully\n");
    int closeReturn2 = close(socket_desc);
        if(closeReturn2 <0){
        perror("\nClosing Local_socket Error: ");
    }
    printf("Local Socket Closed Successfully\n");
    return 0;
}