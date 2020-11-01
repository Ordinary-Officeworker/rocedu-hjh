#include<stdio.h>
#include<unistd.h>
void myod(int fd,int n1,int n2,int n3,int n4)
{
    char ch,line[16];
    int i;
    int a=0;
    int j=0;
    while(read(fd,&ch,1)!=0){
        line[j%16]=ch;
	if((j+1)%16==0){
        printf("%07o  ",16*a);
a++;
        if(n1){for(i=0;i<16;i++)
        {
            if(line[i]=='\n')
            {printf("%5s","\\n");continue;}
	    if(line[i]=='\t')
            {printf("%5s","\\t");continue;}
            putchar(line[i]);
            putchar(' ');
            putchar(' ');
            putchar(' ');
            putchar(' ');
        }
        putchar('\n');}
        if(n2){printf("         ");for(i=0;i<16;i++)
        {
            
            if(line[i]=='\n')
            {printf("0%-4x",'\n');continue;}
	    if(line[i]=='\t')
            {printf("0%-4x",'\t');continue;}
            printf("%-5x",line[i]);
        }
        putchar('\n');
        }

        if(n3){printf("        ");for(i=0;i<16;i++)
        {

            if(line[i]=='\n')
            {printf("%-5d",'\n');continue;}
	    if(line[i]=='\t')
            {printf("%-5d",'\t');continue;}
            printf("%-5d",line[i]);
        }
        putchar('\n');
        }
        if(n4){printf("       ");for(i=0;i<16;i++)
        {
            if(line[i]=='\n')
            {printf("%-5o",'\n');continue;}
	    if(line[i]=='\t')
            {printf("%-5o",'\t');continue;}
            printf("%-5o",line[i]);
        }
        putchar('\n');
        }
	}
	j++;

    }
}
