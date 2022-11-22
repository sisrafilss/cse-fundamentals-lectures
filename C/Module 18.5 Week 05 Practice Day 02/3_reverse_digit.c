#include<stdio.h>
#include<string.h>

void reverse(int x)
{
    while (x > 0)
    {
        int last_digit = x % 10;
        x /= 10;
        printf("%d", last_digit);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(n);

    return 0;
}
