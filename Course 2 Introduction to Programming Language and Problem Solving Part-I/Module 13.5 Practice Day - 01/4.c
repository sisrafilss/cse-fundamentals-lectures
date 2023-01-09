
#include<stdio.h>

int main()
{
    int arr[] = {-7, 2, 3, 8, 6, 6, 75, 38, 3, 2};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0], index_of_largest = 0;;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index_of_largest = i;
        }
    }

    int second_largest = arr[0];
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    printf("Second largest = %d\n", second_largest);

    return 0;
}
