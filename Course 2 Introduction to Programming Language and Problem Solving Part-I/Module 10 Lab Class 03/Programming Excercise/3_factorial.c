#include<stdio.h>

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);

    int fact = 1, x = n;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    printf("Factorial of Number %d is %d", x, fact);

    return 0;
}

//5!  = 5 * 4 * 3 * 2 * 1
//    = 5*4 + 5*3 + 5*2 + 5*1
//    = 20 + 15 + 10 + 5
//    =
