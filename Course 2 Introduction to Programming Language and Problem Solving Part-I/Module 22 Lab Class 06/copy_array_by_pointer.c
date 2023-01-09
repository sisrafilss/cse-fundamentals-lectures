#include<stdio.h>

int * make_copy(int n, int input[])
{
    int *out = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        out[i] = input[i];
    }
    return out;
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

    int *b = make_copy(n, a);


    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

