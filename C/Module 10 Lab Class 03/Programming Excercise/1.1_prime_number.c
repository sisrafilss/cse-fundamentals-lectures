#include<stdio.h>

int main()

{
    for (int i = 101; i <= 200; i++)
    {
        int prime = 0;
        for (int j = 2; j <= 9; j++)
        {
            if (i % j == 0)
            {
                prime++;
            }
        }
        if (prime == 0)
        {
            printf("%d ", i);
        }
    }


    return 0;
}
