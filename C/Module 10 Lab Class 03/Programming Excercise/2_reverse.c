#include<stdio.h>

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    printf("Reverse of Number %d is ", n);
    while (n > 0)
    {
        int digit = n % 10;
        printf("%d", digit);
        n /= 10;
    }

    return 0;
}
