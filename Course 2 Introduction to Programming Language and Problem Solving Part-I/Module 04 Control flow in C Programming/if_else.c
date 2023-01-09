#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 40)
    {
        printf("You have passed!\n");
    }
    else
    {
        printf("You have failed.\n");
    }

    return 0;
}
