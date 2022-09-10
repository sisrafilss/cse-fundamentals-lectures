#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Declaring an array using variable length array. This memory is allocated from the stack of the computer.
    // int marks[n];

    // Dynamic memory allocation using malloc function. This memory is allocated from the heap of the computer. heap is much bigger than the stack
    int *marks = (int*) malloc(n * sizeof(int));



    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
