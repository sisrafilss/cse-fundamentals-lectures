#include<stdio.h>
#include<string.h>

int main()
{
    char input[20];
    char str[20] = "Hello,World!";
    scanf("%s", input);

    int cmp = 0;
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (input[i] == str[i])
        {
            cmp++;
        }
    }

    if (cmp == strlen(str))
    {
        printf("AC");
    }
    else
    {
        printf("WA");
    }


    return 0;
}


