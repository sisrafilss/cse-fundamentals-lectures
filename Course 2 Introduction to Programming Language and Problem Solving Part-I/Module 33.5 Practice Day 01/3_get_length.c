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

int main()
{
    int str[101];
    gets(str);

    printf("Length: %d\n", get_length(str));

    return 0;
}
