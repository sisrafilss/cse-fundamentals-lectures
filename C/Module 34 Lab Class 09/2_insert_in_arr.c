#include<stdio.h>

void insert(int n, int arr[], int pos, int val)
{
    for (int i = n - 2; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
}

int main()
{
    int arr[7] = {12, 14, 17, 25, 77, 45};

    int pos, val;
    scanf("%d %d", &pos, &val);


    insert(7, arr, pos, val);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
