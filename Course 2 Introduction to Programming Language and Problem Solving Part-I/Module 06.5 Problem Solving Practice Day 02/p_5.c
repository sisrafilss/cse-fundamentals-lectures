#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;



    for (int i = 1; i <= n; i++)
    {
        int x;
        printf("Input %dst Integer: ", i);
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            sum += x;
        }
    }

    printf("Sum of even integers = %d\n", sum);

    return 0;
}



