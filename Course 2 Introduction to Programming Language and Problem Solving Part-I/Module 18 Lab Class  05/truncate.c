#include<stdio.h>
#include<string.h>

void make_equal_to_avrg(int *a, int *b)
{
    int average = (*a + *b) / 2;
    *a = *b = average;
}

int main()
{
    int a = 6, b = 19;

    make_equal_to_avrg(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
