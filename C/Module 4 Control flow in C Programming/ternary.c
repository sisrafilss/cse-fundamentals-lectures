#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    // ternary operator
    int abs = x > 0 ? x : -x;

    printf("%d\n", abs);

    return 0;
}
