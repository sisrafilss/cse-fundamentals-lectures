#include<stdio.h>

int get_length(char str[])
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }

    return index;
}

void string_concat(char a[], char b[])
{
    int index = get_length(a);
    int j = 0;
    while (b[j] != '\0')
    {
        a[index] = b[j];
        index++;
        j++;
    }
    a[index] = '\0';
}

int main()
{
    int a[101], b[101];
    gets(a);
    gets(b);

    string_concat(a, b);

    printf("%s\n", a);

    return 0;
}
