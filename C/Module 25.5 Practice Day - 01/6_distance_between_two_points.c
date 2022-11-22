#include<stdio.h>
#include<math.h>

struct Points
{
    int x;
    int y;
};

struct Points midpoint(struct Points point1, struct Points point2)
{
    struct Points mid_point;
    mid_point.x = (point1.x + point2.x) / 2;
    mid_point.y = (point1.y + point2.y) / 2;
    return mid_point;
}

int main()
{
    struct Points point1;
    struct Points point2;

    printf("Point 1 (x, y) = ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Point 2 (x, y) = ");
    scanf("%d %d", &point2.x, &point2.y);

    struct Points mid_point = midpoint(point1, point2);

    printf("Midpoint (x,y) = (%d, %d)\n", mid_point.x, mid_point.y);

    return 0;
}
