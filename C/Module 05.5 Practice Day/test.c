#include<stdio.h>

int main()
{
    int A = 5;
    int B = 6;
    int C = 10;

    if ((A<B && B%4==0) || (C%5==0))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
