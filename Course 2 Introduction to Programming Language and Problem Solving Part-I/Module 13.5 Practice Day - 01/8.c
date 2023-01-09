#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    scanf("%s", input);

//    printf("%s", strrev(input));

    int len = strlen(input);
    for (int i = len-1; i >= 0; i--)
    {
        printf("%c", input[i]);
    }



    return 0;
}
