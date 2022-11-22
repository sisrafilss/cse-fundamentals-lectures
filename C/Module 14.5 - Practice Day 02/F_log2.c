#include<stdio.h>
#include<string.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long s = 2, count = 0;

    if (n == 2)
    {
        count = 1;
    }
    else if (n > 2)
    {
        while (s <= n)
        {
            count++;
            s *= 2;

        }
    }

    printf("%lld", count);

    return 0;
}
// lskdjfapsdf

