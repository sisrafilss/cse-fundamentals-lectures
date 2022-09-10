#include<stdio.h>

int main()
{

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int remaining = A - B > C ? 0 : C - (A - B);

    printf("%d", remaining);

    return 0;
}
