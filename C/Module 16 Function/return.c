#include<stdio.h>

int calc_gcd(int x, int y)
{
    while (y > 0)
    {
        int tmp = x % y;
        x = y;
        y = tmp;
    }
    int gcd = x;
    return gcd;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int gcd = calc_gcd(m, n);
    printf("GCD is: %d\n", gcd);

    m /= gcd;
    n /= gcd;
    printf("Simplest Form: %d/%d\n", m, n);

    return 0;
}

