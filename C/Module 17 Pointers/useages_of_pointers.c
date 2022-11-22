#include<stdio.h>

void swap(int *x, int *y) // receive the address of x and y as pointers
{
    // swap the pointers value
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int x = 10, y = 20;

    swap(&x, &y); // pass the address of x and y
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
