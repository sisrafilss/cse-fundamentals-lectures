#include<stdio.h>

int main()
{
    int number_of_users;
    scanf("%d", &number_of_users);
    int ratings[number_of_users];

    for (int i = 0; i < number_of_users; i++)
    {
        int rating;
        scanf("%d", &rating);
        ratings[i] = rating;
    }

    // Counter array
    int counters[6] = {0};

    for (int i = 0; i < number_of_users; i++)
    {
        int x = ratings[i];
        counters[x]++;
    }


    for (int i = 1; i <= 5; i++)
    {
        printf("%d -> %d\n", i, counters[i]);
    }

    return 0;
}
