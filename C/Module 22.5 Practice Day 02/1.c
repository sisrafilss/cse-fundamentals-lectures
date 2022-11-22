#include<stdio.h>

int * makeReverse(int n, const int a[])
{
    int *reversed = (int*) malloc(n * sizeof(int));

    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        reversed[j] = a[i];
    }

    return reversed;
}

int main()
{
    int n;
    scanf("%d", &n);
    const int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *b = makeReverse(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
