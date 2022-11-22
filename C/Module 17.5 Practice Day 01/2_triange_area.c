#include<stdio.h>

float rectangle_area(float length, float width)
{
    float area = 0.5 * length * width;
    return area;
}

int main()
{
    float length, width;
    printf("Length: ");
    scanf("%f", &length);
    printf("Width: ");
    scanf("%f", &width);

    float area = rectangle_area(length, width);

    printf("Area of rectangle is %0.2f\n", area);

    return 0;
}
