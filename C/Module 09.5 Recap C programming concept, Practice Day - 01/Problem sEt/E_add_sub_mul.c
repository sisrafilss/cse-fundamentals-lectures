#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int added = a + b;
    int substracted = a - b;
    int multiplied = a * b;

    int largest = added;

    if (substracted > largest)
    {
        largest = substracted;
    }
    if (multiplied > largest)
    {
        largest = multiplied;
    }

    printf("%d", largest);

    return 0;
}

