#include<stdio.h>
#include<stdbool.h>

int main()
{
    int x, y;
    printf("Input two integers x and y: ");
    scanf("%d %d", &x, &y);

    bool num_exists = false;

    for (int i = x; i <= y; i+=x)
    {
        if (y % i == 0)
        {
            printf("%d ", i);
            num_exists = true;
        }
    }

    if (!num_exists)
    {
        printf("No such integers\n");
    }

    return 0;
}

/*
input: 5 20;

Output: 5 10 20


*/




