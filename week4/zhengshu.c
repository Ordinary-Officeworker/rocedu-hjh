#include<stdio.h>

int main(){
    if(-2147483647-1 ==  2147483648U){
        printf("第一条成立\n");
    }   else{
        printf("第一条不成立\n");
    }

    if(-2147483647-1 < -2147483647){
        printf("第二条成立\n");
    }   else{
        printf("第二条不成立\n");
    }

    if(-2147483647-1 <  2147483647){
        printf("第三条成立\n");
    }   else{
        printf("第三条不成立\n");
    }

    if((unsigned)-2147483647-1 <  2147483647){
        printf("第四条成立\n");
    }   else{
        printf("第四条不成立\n");
    }

    return 0;
}