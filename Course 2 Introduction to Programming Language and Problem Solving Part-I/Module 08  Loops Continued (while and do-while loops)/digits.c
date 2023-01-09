#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int sum = 0;

    while(x > 0)
    {
        int digit = x % 10;
        sum += digit;
        x = x / 10;
    }
    printf("%d\n", sum);

    return 0;
}

/*

x = 1234;
x%10 => 4
x/10 => 123

*/

