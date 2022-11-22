#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit.\n");
    }

    return 0;
}
