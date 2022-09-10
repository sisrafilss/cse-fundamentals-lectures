#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello";
    char *ch = strchr(str, 'e'); // return the pointer of 'e'... if 'e' not exists in string str, it will return nil (NULL) pointer.
    if (!ch)
    {
        printf("Found null. No occurrence\n");
    }
    else
    {
        printf("Found\n");
    }

    return 0;
}
