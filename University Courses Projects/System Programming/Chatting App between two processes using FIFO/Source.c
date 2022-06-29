#include<unistd.h>
#include<sys/select.h>
#include<error.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
int main(){
    //Making fifo which is just a named pipes
    mkfifo("channel1",S_IRUSR|S_IWUSR);
    char buf[1000];
    //Opening the fifo that will return fifo
    int fd_fifo = open("channel1",O_RDWR);
    //error checking
    if(fd_fifo ==-1)
    {
        perror("Failed to open fifo\n");
        return -1;
    }
    //We will monitor the files first for reading and wirting so we will use select
    //We do not know which file will send data first so we use select
    //making read set
    fd_set readset;
    int b_r, b_w;
    //infinite loop for continuous chatting
    while(1){
        //empty readset as it has garbage values
        FD_ZERO(&readset);
        //setting fifo fd in read set
        FD_SET(fd_fifo,&readset);
        //setting keyboard file fd in readset
        FD_SET(STDIN_FILENO,&readset);
        //finding maximum file discriptor
        int max_fd = ((fd_fifo>STDIN_FILENO?fd_fifo:STDIN_FILENO)) +1 ;
        //Select system call
        int s = select(max_fd,&readset,NULL,NULL,NULL);
        if(s==-1)
        {
            perror("Select failed\n");
            return -1;
        }
        //Select success
        if (s>0){
            //Checking devices in readset
            if (FD_ISSET(fd_fifo,&readset))
            {
                //if channels fd is in read set, read from it
                b_r = read(fd_fifo,buf,sizeof(buf));
                if (b_r == -1)
                {
                    perror("Error in reading: ");
                    return -1;
                }
                //and write to screen
                b_w = write(STDOUT_FILENO,buf,b_r);
                if (b_w == -1)
                {
                    perror("Error in writing: ");
                    return -1;
                }
            }
            if (FD_ISSET(STDIN_FILENO,&readset)){
                //if keyboard's fd is in the read set read from it
                b_r = read(STDIN_FILENO,buf,sizeof(buf));
                if (b_r == -1)
                {
                    perror("Error in reading: ");
                    return -1;
                }
                //and write to screen
                b_w = write(fd_fifo,buf,b_r);
                if (b_w == -1)
                {
                    perror("Error in writing: ");
                    return -1;
                }
            }
        }
    }
return 0;
}