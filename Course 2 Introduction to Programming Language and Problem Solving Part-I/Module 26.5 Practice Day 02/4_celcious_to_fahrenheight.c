#include<stdio.h>

struct Fraction
{
    int num;
    int denom;
};

int gcd(int a, int b)
{
    while (b > 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

struct Fraction reduce(struct Fraction a)
{
    struct Fraction reduced;
    int g = gcd(a.num, a.denom);
    reduced.num = a.num / g;
    reduced.denom = a.denom / g;

    return reduced;
};

struct Fraction summation(struct Fraction a, struct Fraction b)
{
    struct Fraction result;

    result.num = (a.num * b.denom) + (a.denom * b.num);
    result.denom = a.denom * b.denom;

    return reduce(result);
};

struct Fraction multiply(struct Fraction a, struct Fraction b)
{
    struct Fraction result;

    result.num = a.num * b.num;
    result.denom = a.denom * b.denom;

    return reduce(result);
};

struct Fraction celcious_to_fahrenheight(int celcious)
{
    // Formula -  °F = (°C × 9/5) + 32
    struct Fraction mul_part = multiply((struct Fraction) {celcious, 1}, (struct Fraction) {9, 5});
    struct Fraction result = summation(mul_part, (struct Fraction) {32, 1});
    return reduce(result);
};



int main()
{
    int celcious;
    scanf("%d", &celcious);

    struct Fraction fahrenheight = celcious_to_fahrenheight(celcious);

    printf("%d degree C = %d/%d degree F\n", celcious, fahrenheight.num, fahrenheight.denom);

    return 0;
}
