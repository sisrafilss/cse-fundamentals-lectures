#include<stdio.h>



int main()
{
    int n;
    scanf("%d", &n);

    int xor = 0;
    for (int i = 1; i <= n; i++)
    {
        xor = xor ^ i;
        printf("Xor of %d = %d\n", i, xor);
        if (xor % 4 == 0)   printf("\n");


    }



    return 0;
}
