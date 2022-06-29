#include<stdio.h>
#include<unistd.h>
#include<error.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<dirent.h>
#include<pwd.h>
void depth(char* namedir){
    //making the pointer of the structure DIR
    DIR* dir;
    //making the pointer of default structure dirent
    struct dirent* drip;
    struct stat buf;
    //opening the directory
    dir = opendir(namedir);
    //error checking
    if (dir==NULL){
        perror("Error is: ");
    }
    //changing directory
    chdir(namedir);
    //reading directory
    while((drip =readdir(dir))!=NULL){
        stat(drip->d_name,&buf);
        //CHECK FOR NOT TO PRINT '..' AND '.' THAT ARE PART OF ANY DIRECTORY
        if(drip->d_name[0] == '.')
            continue;
        printf("%s\n",drip->d_name);
        if (S_ISDIR(buf.st_mode)){
            depth(drip->d_name);
            chdir("..");
        }
        }

    }

int main(int argc, char* argv[]){
    
    depth(argv[1]);

    return 0;
}
