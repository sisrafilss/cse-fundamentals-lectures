#include<stdio.h>

int main()
{
    int arr[7] = {10, 20, 50, 40, 50, 30, 40};

    int max = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum is %d\n", max);


    int max_occurs = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == max)
        {
            max_occurs++;
        }
    }

    printf("Maximum occurs %d times\n", max_occurs);

    return 0;
}
