#include<stdio.h>

int main()
{
    char str[] = "This is a string!";

    int sz = sizeof(str) / sizeof(str[0]);
    printf("Size: %d\n", sz);

    str[6] = 'n';

    printf("%s", str);

    return 0;
}
