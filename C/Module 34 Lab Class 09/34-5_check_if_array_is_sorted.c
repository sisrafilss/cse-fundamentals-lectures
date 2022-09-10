#include<stdio.h>
#include<stdbool.h>

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

void copy_arr(int n, int a[], int b[])
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

bool is_sorted(int n, int a[])
{
    int b[n];
    copy_arr(n, a, b);

    sort(n, b);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])   return false;
    }

    return true;
}

int main()
{
    int arr[7] = {12, 14, 25, 77, 99};

    if (is_sorted(7, arr))
    {
        printf("Yes! Sorted!!\n");
    }
    else
    {
        printf("Sorry! Not Sorted!!\n");
    }

    return 0;
}
