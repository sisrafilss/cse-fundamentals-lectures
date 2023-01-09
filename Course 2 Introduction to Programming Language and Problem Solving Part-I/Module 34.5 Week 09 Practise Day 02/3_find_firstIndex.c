#include<stdio.h>
#include<string.h>

int find_firstIndex(char str[], char c)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[101], c;
    gets(str);
    scanf("%c", &c);

    int first_idx = find_firstIndex(str, c);

    printf("Index of %c is: %d\n", c, first_idx);

    return 0;
}
