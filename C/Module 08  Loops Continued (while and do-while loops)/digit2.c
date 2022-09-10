#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int reversed = 0;

    while(x > 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    printf("%d\n", reversed);
    return 0;
}

/*

x = 1234;  ==> 4321
x%10 => 4

4 * 10 + 3 = 43

0 * 1 + 4 = 4


*/


