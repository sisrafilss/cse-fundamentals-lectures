#include<stdio.h>
#include<string.h>

int main()
{
    char s[11], t[11];
    scanf("%s %s", s, t);

    if (strcmp(s, t) > 0)
    {
        printf("No");
    }
    else if (strcmp(s, t) < 0)
    {
        printf("Yes");
    }

    return 0;
}


