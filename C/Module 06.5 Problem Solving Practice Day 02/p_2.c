#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 5 || b == 5 || (a - b) == 5 || (b - a) == 5 || (a + b) == 5 )
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}

