#include<stdio.h>

// selection sort
void sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[7] = {12, 14, 17, 25, 99, 77, 45};

    sort(7, arr); // using selection sort

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
