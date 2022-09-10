#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("%c\n", tolower(ch));
    }
    else
    {
        printf("%c\n", ch);
    }

    return 0;
}

