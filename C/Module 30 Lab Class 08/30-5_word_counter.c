#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    str[len - 1] = '\0';

    int words = 0;
    bool word;
    for (int i = 0; i < len; i++)
    {

        if (str[i] != ' ')
        {
            word = true;
        }
        if (str[i] == ' ')
        {
            if (word)
            {
                word = false;
                words++;
            }
        }
    }
    if (word)
    {
        word = false;
        words++;
    }
    printf("Words = %d\n", words);

    return 0;
}
