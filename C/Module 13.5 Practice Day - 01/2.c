#include<stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
