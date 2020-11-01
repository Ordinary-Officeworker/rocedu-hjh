#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include"head.h"


int main(int argc,char *argv[])
{

    int i;
    int n1=0,n2=0,n3=0,n4=0;
    for(i=1;i<argc-1;i++)
    {
        switch(argv[i][2])
        {
            case 'c':n1=1;break;
            case 'x':n2=1;break;
            case 'd':n3=1;break;
            case 'o':n4=1;break;
        }
    }
    int fd=10;
    fd=open(argv[argc-1],O_RDONLY,0);  
//printf("%d",fd);

    if(fd==-1){printf("Error!\n");exit(1);}

    myod(fd,n1,n2,n3,n4);
    close(fd);
    return 0;
}