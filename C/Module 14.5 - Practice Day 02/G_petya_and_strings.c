
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    strlwr(str1);
    strlwr(str2);

    if (strcmp(str1, str2) > 0)
    {
        printf("1");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }

    return 0;
}

