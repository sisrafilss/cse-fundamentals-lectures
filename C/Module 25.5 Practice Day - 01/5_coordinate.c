#include<stdio.h>

struct Points
{
    int x;
    int y;
};

int main()
{
    struct Points point = {23, 99};

    printf("(x, y) = (%d, %d)\n", point.x, point.y);

    return 0;
}
