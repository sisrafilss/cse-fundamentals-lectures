#include<stdio.h>

int main()

{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int prime = 0;
    for (int i = 2; i <= 9; i++)
    {
        if (n % i == 0)
        {
            prime++;
        }
    }

    if (n == 1 || n == 2 || n == 3 || n == 5 || n == 7)
    {
        printf("Prime\n");
    }
    else
    {
         if (prime == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    }

    return 0;
}
