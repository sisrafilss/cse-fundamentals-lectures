#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is positive.\n", a);
    }
    else if (a < 0)
    {
        printf("%d is negative.\n", a);
    }
    else
    {
        printf("%d is zero.\n", a);
    }

    return 0;
}

/*
// for nested if-else
if (condition)
{
    if (condition2)
    {
        // code here
    }
}
else
{
    // code here
}

// for if-else if
if (condition)
{
    // code here
}
else if (codition2)
{
    // code here
}
else
{
    // code here
}
*/
