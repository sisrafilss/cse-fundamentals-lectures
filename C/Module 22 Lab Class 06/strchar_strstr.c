#include<stdio.h>

int main()
{
    char word[100];
    gets(word);
    char c;
    scanf(" %c", &c);

    char *cur = word;

    while (cur)
    {
         char *pos = strchr(cur, c);
         if (pos == NULL)  break;
         printf("Found at position: %d\n", pos - word);
         printf("%s", pos);
         cur = pos + 1;
    }

    /*
    if (!pos)
    {
        printf("%c Not found!\n", c);
    }
    else
    {
        printf("%c Found at position: %d", c, pos - word);
    }
    */
    return 0;
}
