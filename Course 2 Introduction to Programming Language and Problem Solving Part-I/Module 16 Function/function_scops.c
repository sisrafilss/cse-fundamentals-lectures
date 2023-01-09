#include<stdio.h>

int add(int a, int b)
{
    static int count = 0;
    int sum = a + b;
    count++;
    printf("add function %dth call...\n", count);
    return sum;

}

int main()
{
    add(1, 2);
    add(2, 5);
    add(2, 2);
    add(9, 2);
    add(7, 5);

    return 0;
}
