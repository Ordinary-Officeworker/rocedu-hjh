#include<stdio.h>

int main(int argc, const char * argv[]){
    union NUM{
        int a;
        char b;
    }num;
    num.a = 0x01234567;
    if(num.b == 0x01)
        printf("20181223何家豪的电脑是大端设备\n");
    else
    {
        printf("20181223何家豪的电脑是小端设备\n");
    }

    return 0;
}