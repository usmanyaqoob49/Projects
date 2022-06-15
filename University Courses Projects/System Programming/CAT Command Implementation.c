//cat command
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<error.h>
#include<stdio.h>
int main(int argc, char* argv[]){
	int buffer[3];	//Buffer for reading and writing
	int br, bw, source, destination;
	//When we have a single arguement that is file name itself
	//We will write through keyboard and shown on monitor
	if(argc < 2)
	{
		source = STDIN_FILENO;	//Keyboard
		destination = STDOUT_FILENO;	//Monitor
	}
	//When we have file name and another file arguement
	//Content of that file will be on monitor
	else if (argc==2)
	{
		source = open(argv[1],O_RDONLY);	//File provided in command line
		if (source==-1){
			perror("Error opening source when argc = 2:");
			return -1;
			}
		destination = STDOUT_FILENO;	//Monitor
	}
	//When we have two files in command line means total 4 arguements
	//content of file 1 will be written in file 2
	else if(argc==4)
	{
		source = open(argv[1],O_RDONLY);	//File 1 be source 
		if (source==-1){
			perror("Error opening source when argc = 4:");
			return -1;
			}
		destination =open(argv[3],O_WRONLY|O_CREAT|O_TRUNC,S_IRWXU);	
		//destination will be file 2
		if (destination==-1){
			perror("Error is:");
			return -1;
			}
	}
	br = 1;
	while(br!=0){
		br = read(source,buffer,sizeof(buffer));
		bw = write(destination,buffer,br);
		}
return 0;
}
		
			
