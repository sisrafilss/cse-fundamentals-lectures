#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Hello, World!";

    char str2[6];

    strcpy(str2, str1);

//    strncpy(str2, str1, 50);

//    str2[strlen(str1)] = '\0';

    printf("Str2: %s", str2);

    return 0;
}

