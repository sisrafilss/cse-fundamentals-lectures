#include<stdio.h>
#include<stdbool.h>

int main()
{
    int x;
    scanf("%d", &x);

    int sum = 0;
    while(x > 0)
    {
        int digit = x % 10;
        x /= 10;
        if (digit % 2) continue;
        sum += digit;
    }
    printf("%d\n", sum);
    return 0;
}

