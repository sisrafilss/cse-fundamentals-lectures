#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Input string: ");
    fgets(str, 100, stdin);
    str[100] = '\0';

    char s;
    printf("Input character to search: ");
    scanf("%c", &s);

    int count = 0;

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == s)
        {
            count++;
        }
    }

    printf("Total occurrences of %c: %d", s, count);

    return 0;
}
