


#include<stdio.h>

int main()
{
    int length;
    printf("Input size of array: ");
    scanf("%d", &length);

    printf("Input elements in array:\n");
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    int search_element;
    printf("Element to search is: ");
    scanf("%d", &search_element);

    int index;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == search_element)
        {
            index = i;
        }
    }

    printf("Element found at index %d\n", index);

    return 0;
}
