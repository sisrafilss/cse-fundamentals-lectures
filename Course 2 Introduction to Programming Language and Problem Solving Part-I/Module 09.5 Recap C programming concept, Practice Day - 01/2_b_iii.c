#include<stdio.h>

int main()
{
    int i = 1, n = 4, x = 1;



    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", x++);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}



