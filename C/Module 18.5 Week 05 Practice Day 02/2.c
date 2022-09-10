#include<stdio.h>
#include<string.h>

int number;

void set(v)
{
    number = v;
    printf("Number is now: %d\n", number);
}

void print(void)
{
    printf("prints %d\n", number);
}

void make_double(void)
{
    number *= 2;
    printf("Number is now: %d\n", number);
}

int main()
{
    set(10);
    set(5);
    print();
    make_double();
    make_double();
    print();

    return 0;
}
