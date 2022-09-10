#include<stdio.h>

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);

    int sum = 0, x = n;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += last_digit;
        n /= 10;
    }

    printf("Sum of Number %d is %d", x, sum);

    return 0;
}
