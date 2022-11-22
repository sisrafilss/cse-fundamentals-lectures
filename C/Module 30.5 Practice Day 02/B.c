#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    gets(str);

    int len = strlen(str);
    int freq[26] = {0};
    for (int i = 1; i < len - 1; i += 3)
    {
        char c = str[i];
        freq[c - 'a']++;
    }

    int distict_char = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            distict_char++;
        }
    }

    printf("%d", distict_char);

    return 0;
}
