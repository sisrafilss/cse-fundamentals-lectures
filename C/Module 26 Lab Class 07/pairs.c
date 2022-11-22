#include<stdio.h>

struct Result
{
    int vagfol;
    int vagses;
};

// Return multiple value using structure
struct Result divide(int x, int y)
{
    struct Result result;
    result.vagfol = x / y;
    result.vagses = x % y;
    return result;
};

// Same function in short and concise way
struct Result divide2(int x, int y)
{
    return (struct Result) {x / y, x % y};
};

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    struct Result result = divide(x, y);

    printf("Vagfol = %d, and Vagsesh = %d\n", result.vagfol, result.vagses);

    return 0;
}
