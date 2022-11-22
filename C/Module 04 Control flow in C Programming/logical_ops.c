#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
    {
        printf("Okay!\n");
    }
    else
    {
        printf("Not Okay!\n");
    }

    return 0;

}
