#include<stdio.h>

int main()
{
    int money = 0;
    int target = 100;

    while (money < target)
    {
        int amount;
        printf("Need more money. Enter Amount: ");
        scanf("%d", &amount);
        money += amount;

        printf("Current Money is: %d\n", money);
    }
    return 0;
}

/*

    while(condition)
    {
        statement;
    }

*/

