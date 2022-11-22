#include<stdio.h>
#include<string.h>

void truncated(int k, char str[])
{
    char newStr[k];
    for (int i = 0; i < k; i++)
    {
        newStr[i] = str[i];
    }

    for (int i = 0; i < strlen(newStr); i++)
    {
        printf("%c", newStr[i]);
    }
}

int main()
{
    char str[101];
    int k;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the truncated value: ");
    scanf("%d", &k);

    truncated(k, str);

    return 0;
}

