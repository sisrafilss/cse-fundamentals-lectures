#include<stdio.h>
#include<string.h>

void add(int a[], int b[], int sum[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sum[i]);
    }
}

int main()
{
    int  a[3] = {1, 2, 3, 5};
    int b[3] = {2, 3, 4};
    int sum[3] = {0};

    add(a, b, sum, 3);

    return 0;
}


/*
Bua Bill = 400
Gas Bill = 400
Water + Electricity = 200;

*/
