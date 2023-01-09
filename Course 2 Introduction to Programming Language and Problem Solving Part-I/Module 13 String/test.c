#include<stdio.h>

int main()
{
    char a[100] = "ab";
    char b[100] = "cd";
    strcat(a, b);
    printf("%s", b);

    return 0;
}
