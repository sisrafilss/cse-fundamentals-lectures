#include<stdio.h>

int main()
{
    int i = 1, n = 9;

    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;

    }

    return 0;
}

