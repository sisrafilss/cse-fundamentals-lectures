#include<stdio.h>
#include<stdbool.h>

int main()
{
    while(true)
    {
        int input;
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        printf("%d\n", input);
    }

    return 0;
}
