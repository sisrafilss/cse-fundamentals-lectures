#include<stdio.h>

int get_sum(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = get_sum(n, a);

    printf("Sum = %d\n", sum);

    return 0;
}
