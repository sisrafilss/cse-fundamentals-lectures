#include<stdio.h>

void print_gcd(int x, int y)
{
    while (y > 0)
    {
        int tmp = x % y;
        x = y;
        y = tmp;
    }
    int gcd = x;
    printf("GCD: %d\n", gcd);
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    print_gcd(m, n);

    return 0;
}
