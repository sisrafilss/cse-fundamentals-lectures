#include<stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
