#include<stdio.h>
#include<string.h>

int main()
{
    char code[201];
    gets(code);
    int len = strlen(code);
    char decoded[201];
/*
    0 as «.»,
    1 as «-.»
    2 as «--».
    .-.--
*/
    int i = 0, j = 0;
    while (i < len)
    {
        if (code[i] == '.')
        {
            decoded[j] = '0';
            i++;
            j++;
        }
        else if (code[i] == '-' && code[i + 1] == '.')
        {
            decoded[j] = '1';
            i += 2;
            j++;
        }
        else if (code[i] == '-' && code[i + 1] == '-')
        {
            decoded[j] = '2';
            i += 2;
            j++;
        }
    }
    decoded[j] = '\0';


    printf("%s", decoded);

    return 0;
}
