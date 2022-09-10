#include<stdio.h>

struct Array
{
    int arr[50];
};

struct Array arraysum(int n, int a[], int b[]);

int main()
{
    int a[] = {2, 3, 4};
    int b[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    struct Array sum = arraysum(n, a, b);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sum.arr[i]);
    }

    return 0;
}

struct Array arraysum(int n, int a[], int b[])
{
    struct Array sum;
    for (int i = 0; i < n; i++)
    {
        sum.arr[i] = a[i] + b[i];
    }
    return sum;
};
