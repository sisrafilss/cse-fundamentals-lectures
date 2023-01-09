#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[100] = '\0';
    strlwr(str);

    int vowel = 0, consonant = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u'))
        {
            consonant++;
        }
    }

    printf("Total Vowels = %d\n", vowel);
    printf("Total Consonant = %d\n", consonant);

    return 0;
}
