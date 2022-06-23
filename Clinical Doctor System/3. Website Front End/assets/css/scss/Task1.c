#include<stdio.h>           //for Basic inout output
#include<string.h>         //for the use of strerror
#include<errno.h>        //for errno
#include<unistd.h>
#include<sys/wait.h>   //for wait call

int main(){
int x = wait(NULL);
	             printf("Wait Status Returns: %d \n",x); //will print the return value of wait function
	             perror("Wait Status using perror:");
	printf("Errno Value:%d \n",errno);   //Now using strerror
	   printf("Wait Status Using Strerror: %s ", strerror(errno));
return 0;y
}
