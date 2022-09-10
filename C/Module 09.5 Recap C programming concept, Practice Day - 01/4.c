#include<stdio.h>

int main()
{
    int x, y = 0;
    do
    {
        printf("Enter 0/1: ");
        scanf("%d", &x);
        if (y > 0)
        {
            printf("Wrong Input. Try Again.\n");
        }
        y++
    }
    while (x != 0 && x != 1);
    printf("You entered %d\n", x);

    return 0;
}
