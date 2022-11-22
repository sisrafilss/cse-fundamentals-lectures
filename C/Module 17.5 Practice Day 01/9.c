
#include<stdio.h>

int main()
{
    const int a = 20;
    printf("%d ", a);
    // Write code here.

    int *b = &a;
    *b = 40;
    printf("%d ", a);

    return 0;
}
