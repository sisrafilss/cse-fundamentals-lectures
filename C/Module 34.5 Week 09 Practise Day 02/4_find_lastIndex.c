#include<stdio.h>
#include<string.h>

int find_lastIndex(char str[], char c)
{
    int len = strlen(str);
    for (int i = len - 1; i > 0; i--)
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

    int first_idx = find_lastIndex(str, c);

    printf("Index of last %c is: %d\n", c, first_idx);

    return 0;
}
