#include<stdio.h>

int main()
{
    for (int i = 1, j = 10; i < j; i++, j--)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}

