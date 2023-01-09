#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd = 1;

    for (int g = 1; g <= a && g <= b; g++)
    {
        if (a % g == 0 && b % g == 0)
        {
            gcd = g;

        }
    }

    printf("GCD: %d\n", gcd);

    return 0;
}
