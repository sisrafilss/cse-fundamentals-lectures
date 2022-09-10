#include<stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);
    char str[n];
    gets(str);
    strlwr(str);

    int len = strlen(str);

    int counter[26] = {0};

    for (int i = 0; i < len; i++)
    {
        counter[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counter[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
