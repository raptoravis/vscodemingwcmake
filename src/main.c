#include <stdio.h>

#include "../include/tool.h"


int main(int argc, char const *argv[])
{
    int a = 1;


    int b = 2;
    printf("%d + %d = %d\n",a,b,sum(a,b));
    a = 3;
    a = 4;
    a = 5;
    a = 6;
    
    a = 7;
    a = 8;
    getchar();
    return 0;
}