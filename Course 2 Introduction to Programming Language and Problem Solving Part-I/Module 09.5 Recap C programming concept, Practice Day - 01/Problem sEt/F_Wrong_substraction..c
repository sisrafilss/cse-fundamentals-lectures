#include<stdio.h>

int main()
{
    long long n;
    int k;
    scanf("%lld %d", &n, &k);

//    printf("k: %d\n", k);

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    printf("%lld", n);

    return 0;
}
