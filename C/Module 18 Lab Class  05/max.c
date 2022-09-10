#include<stdio.h>

int maximum(int a, int b)
{
    if (a > b)  return a;
    else        return b;
}

int get_max(int n, int arr[])
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        max = maximum(max, arr[i]);
    }

    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = get_max(n, arr);

    printf("Maximum: %d\n", max);

    return 0;
}
