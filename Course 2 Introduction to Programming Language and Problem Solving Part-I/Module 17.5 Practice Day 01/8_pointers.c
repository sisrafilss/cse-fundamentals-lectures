#include<stdio.h>

int main()
{
    int x;
    double y;
    char z;

    int *a = &x;
    int *b = &y;
    int *c = &z;

    printf("a = %lld\n", a);
    printf("a + 1 = %lld\n", a + 1);
    printf("a 2 1 = %lld\n\n", a - 2);

    printf("b = %lld\n", b);
    printf("b + 3 = %lld\n", b + 3);
    printf("a - 4 = %lld\n\n", b - 4);

    printf("c = %lld\n", c);
    printf("c + 6 = %lld\n", c + 6);
    printf("a - 5 = %lld\n\n", c - 5);

    return 0;
}
