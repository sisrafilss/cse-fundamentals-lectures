#include<stdio.h>

int main()
{
    char name[10];

//    scanf("%s", name);
//    gets(name);
    fgets(name, 10, stdin);

    printf("Hello, %s\n", name);

    return 0;
}
