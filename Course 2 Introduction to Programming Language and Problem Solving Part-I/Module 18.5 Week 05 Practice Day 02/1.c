#include<stdio.h>

void print_call()
{
    static int count = 1;
    printf("Called %d times\n", count);
    count++;
}

int main()
{
    print_call();
    print_call();
    print_call();

    return 0;
}
