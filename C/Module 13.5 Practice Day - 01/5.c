

#include<stdio.h>

int main()
{
    int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    int input_element;
    printf("Input element to insert: ");
    scanf("%d", &input_element);

    int index;
    printf("Input position where to insert: ");
    scanf("%d", &index);

    arr[index - 1] = input_element;

    printf("Elements of array are: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
