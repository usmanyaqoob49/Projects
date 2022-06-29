#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include<pwd.h>
void breadth(char* namedir)
{
    DIR* dir;
    struct dirent* drip;
    struct stat buf;
    char buffer[1000];
    dir = opendir(namedir);
    if (dir == NULL)
    {
        perror("Error opening: ");
    }
    chdir(namedir);
    while((drip = readdir(dir)) != NULL)
    {
        if (drip->d_name[0] == '.')
        {
            continue;
        }
        printf("%s\n",drip->d_name);
    }
    //it will restart reading directories from start
    rewinddir(dir);
    while ((drip = readdir(dir)) != NULL)
    {
        if (drip->d_name[0] == '.')
        {
            continue;
        }
        stat(drip->d_name,&buf);
        if (S_ISDIR(buf.st_mode))
        {
            breadth(drip->d_name);
            chdir("..");
        }
    }
    
}
int main(int argc, char* argv[])
{
    breadth(argv[1]);
    return 0;
}