#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello, World!";

//    int idx = 0;
//    while (str[idx] != '\0')
//    {
//        idx++;
//    }

    int length = strlen(str);

    printf("%d", length);

    return 0;
}

