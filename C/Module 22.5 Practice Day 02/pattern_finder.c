#include<stdio.h>

int main()
{
    char text[100], pattern[10];
    gets(text);
    gets(pattern);

    char *cur = text;

    while (cur)
    {
        char *pos = strstr(cur, pattern);
        if (!pos)    break;
        printf("%s found at position %d.\n", pattern, pos - text);
        cur = pos + 1;
    }

    return 0;
}
