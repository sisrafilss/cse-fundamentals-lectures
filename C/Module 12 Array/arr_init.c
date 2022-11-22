#include<stdio.h>

int main()
{
    char greet[] = {'h', 'e', 'l', 'l', 'o'};

    int sz = sizeof(greet) / sizeof(greet[0]);
    for (int i = 0; i < sz; i++)
    {
//        printf("%c", greet[i]);
        putchar(greet[i]); // same as printf("%c", greet[i]);
    }

    return 0;
}
