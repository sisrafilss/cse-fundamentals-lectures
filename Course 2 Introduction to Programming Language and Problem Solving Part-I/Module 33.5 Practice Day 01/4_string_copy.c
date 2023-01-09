#include<stdio.h>

void string_copy(char a[], char b[])
{
    int index = 0;
    while (b[index] != '\0')
    {
        a[index] = b[index];
        index++;
    }
    a[index] = '\0';
}

int main()
{
    int b[101], a[101];
    gets(b);

    string_copy(a, b);

    printf("%s\n", a);

    return 0;
}
