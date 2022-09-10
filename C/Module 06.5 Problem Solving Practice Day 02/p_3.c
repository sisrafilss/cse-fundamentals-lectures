#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 3 == 0 && a % 7 == 0)
    {
        printf("False\n");
    }
    else if (a % 3 == 0 || a % 7 == 0)
    {
        printf("True\n");
    }

    return 0;
}


