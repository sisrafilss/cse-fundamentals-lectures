#include<stdio.h>
#include<string.h>

void sort(int *a, int *b)
{
    if (*a > *b)
    {
        int c = *a;
        *a = *b;
        *b = c;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    sort(&a, &b);

    printf("Sorted: %d %d", a, b);

    return 0;
}
