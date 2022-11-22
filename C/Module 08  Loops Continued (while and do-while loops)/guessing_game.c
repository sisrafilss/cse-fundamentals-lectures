#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    srand(time(0));
    int hidden = rand() % 100 + 1;

    int turn = 0;
    while (turn < 10)
    {
        int guess;
        scanf("%d", &guess);

        if (turn == 9)
        {
            printf("You failed!\n");
            return;
        }

        if (guess == hidden)
        {
            printf("You are right!\n");
            break;
        }
        else if (guess > hidden)
        {
            printf("Guess smaller.\n");
        }
        else
        {
            printf("Guess Larger.\n");
        }

        turn++;
    }

    return 0;
}
