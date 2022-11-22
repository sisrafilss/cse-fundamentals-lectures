#include<stdio.h>

void remove_arr_element(int n, int arr[], int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int pos;
    scanf("%d", &pos);


    remove_arr_element(6, arr, pos);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
