#include "head.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void myod(char *filename)
{
        FILE *fp;
        char ch;
        fp=fopen(filename,"r");
        ch=fgetc(fp);
        printf("ascii: \n");
        while(ch != EOF)
        {
                if(ch=='\n')
                {
                        printf("\n");
                }
                else
                {
                        printf("%d, ",ch);
                }
                ch=fgetc(fp);
        }
        printf("hexcadecimal digit: \n");
        fp=fopen(filename,"r");
        ch=fgetc(fp);
        while(ch != EOF)
        {
                if(ch=='\n')
                {
                        printf("\n");
                }
                else
                {
                        printf("%x, ",ch);
                }
                ch=fgetc(fp);
        }
        fclose(fp);
}