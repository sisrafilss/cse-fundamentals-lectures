#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x <= 125)
    {
        printf("4");
    }
    else if (x >= 126 && x <= 211)
    {
        printf("6");
    }
    else
    {
        printf("8");
    }

    return 0;
}
