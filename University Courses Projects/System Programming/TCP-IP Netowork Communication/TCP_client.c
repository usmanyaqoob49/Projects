#include <stdio.h>
#include <string.h>
#include <error.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main()
{
    int socket_desc;
    struct sockaddr_in server_addr;
    char server_message[2000], client_message[2000];
    
    // Clean buffers:
    memset(server_message,'\0',sizeof(server_message));
    memset(client_message,'\0',sizeof(client_message));
    
    // Create socket:
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);
    
    if(socket_desc < 0){
        perror("Unable to create socket: \n");
        return -1;
    }
    
    printf("Socket created successfully\n");
    
    // Set port and IP the same as server-side:
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(2000);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    
    // Send connection request to server:
    if(connect(socket_desc, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0){
        perror("\nUnable to connect: ");
        return -1;
    }
    printf("Connected with server successfully\n");
    
    // Get input from the user:
    printf("Enter message: ");
    gets(client_message);
    
    // Send the message to server:
    if(send(socket_desc, client_message, strlen(client_message), 0) < 0){
        perror("\nUnable to send message: ");
        return -1;
    }
    
    // Receive the server's response:
    if(recv(socket_desc, server_message, sizeof(server_message), 0) < 0){
        perror("Error while receiving server's msg: \n");
        return -1;
    }
    
    printf("Server's response: %s\n",server_message);
    
    // Close the socket:
    int closeReturn = close(socket_desc);
    if(closeReturn <0){
        perror("\nSocket Closing Unseccessful: ");
    }
    printf("Socket Closed Successfully\n");
    return 0;
}