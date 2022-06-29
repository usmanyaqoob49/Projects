#include<stdio.h>
#include<unistd.h>
#include<error.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
int flag = 0;
void pfind(char* name_dir, char* name_file)
{
    //making the pointer of the structure DIR
    DIR* dir;
    //making the pointer of default structure dirent
    struct dirent* drip;
    struct stat buf;
    char buff[1000];
    //opening the directory
    dir = opendir(name_dir);
    //for error checking
    if (dir == NULL)
    {
        perror("Error in opening: ");
    }
    //changing the directory
    chdir(name_dir);
    //reading directory
    while((drip = readdir(dir)) != NULL)
    {
        if (drip->d_name[0] == '.')
        {
            continue;   
        }
        //strcmp() is used to compare two files names given in its arguement
        //if it returns 0 it means two files are identical 
        if ((strcmp(drip->d_name,name_file)) == 0)
        {
            //get cwd reads the path of the file in the buffer given in its arguement 
            //and second aruguement of it is size of buffer
            getcwd(buff,1000);
            printf("%s in directory %s\n",drip->d_name,buff);
            flag = 1;   //flag become 1 if file found
        }
        stat(drip->d_name,&buf);
        if (S_ISDIR(buf.st_mode))
        {
            if (drip->d_name[0] == '.')
            {
                continue;
            }
            pfind(drip->d_name,name_file);
            chdir("..");
        }
    }
}
int main(int argc, char* argv[])
{
    pfind(argv[1],argv[2]);
    //In case file not found in any direcgtory flag will be 0 so
    if (flag == 0)
    {
        printf("File not found\n");
    }
return 0;
    
}