#include<stdio.h>

int main()
{
    char str[100];
    gets(str);

    char txt[] = "Phitron Member ";

    strcat(txt, str);

    printf("%s\n", txt);

    return 0;
}
