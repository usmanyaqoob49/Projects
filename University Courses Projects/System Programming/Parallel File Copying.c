//parallel file copying
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<error.h>
#include<stdio.h>
int main(int argc, char* argv[]){
	int number_of_child;
	int fd1, fd2;	//for return of opening two files
	int br , bw;	//bytes_read and bytes_write
	int buffer[3];	//array for reading and writing
	number_of_child = (argc-1)/2;	//formula to find number of cilds to perform parallel copying
	
//Firstly we have to check we have enough files as arguements for parallel copying
	if ((argc - 1) % 2 != 0){
		printf("Arguements are not enough for the creation.\n");
		return 0;
		}
//Now when we have enough files as command line arguements then 
	else if((argc - 1) % 2 == 0){
		for (int i = 1; i<argc; i = i+2){
			int pid = fork();	//process creation
			printf("I am process %d\n",i);
		//For error checking
			if (pid == -1){
				perror("Error is: ");
				return -1;
				}
		//For child process
			else if(pid == 0){
			//Opening file first file
				fd1 = open(argv[i], O_RDONLY);
				if(fd1 == -1){
					perror("Error opening file 1 is");
					return -1;
					}
			//Opening the other file
				fd2 = open(argv[i+1], O_WRONLY| O_TRUNC | O_CREAT, S_IRUSR|S_IWUSR|S_IXUSR);
				if(fd2 == -1){
					perror("Error opening file 2 is");
					return -1;
					}
					br =1;
			//Now we will do reading and writing
				while(br!=0){
				//Reading from file 1
					br = read(fd1,buffer,sizeof(buffer));
				//error check
					if(br == -1){
					perror("Error reading from file 1 is");
					return -1;
					}
				//Writing into file 2
					bw = write(fd2,buffer,br);
				//error check
					if(bw == -1){
					perror("Error writing in file 2 is");
					return -1;
					}
				}
					break;
			}
		}
	}
				
return 0;
}
				
					
			
		
