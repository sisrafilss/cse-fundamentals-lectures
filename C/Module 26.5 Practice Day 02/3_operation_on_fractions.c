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

struct Fraction substract(struct Fraction a, struct Fraction b)
{
    struct Fraction result;

    result.num = (a.num * b.denom) - (a.denom * b.num);
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

struct Fraction division(struct Fraction a, struct Fraction b)
{
    struct Fraction result;

    result.num = a.num * b.denom;
    result.denom = a.denom * b.num;

    return reduce(result);
};

int main()
{
    struct Fraction a, b;
    scanf("%d %d", &a.num, &a.denom);
    scanf("%d %d", &b.num, &b.denom);

    struct Fraction subs_res = substract(a, b);
    struct Fraction mul_res = multiply(a, b);
    struct Fraction div_res = (a, b);

    printf("%d/%d - %d/%d = %d/%d\n", a.num, a.denom, b.num, b.denom, subs_res.num, subs_res.denom);
    printf("%d/%d * %d/%d = %d/%d\n", a.num, a.denom, b.num, b.denom, mul_res.num, mul_res.denom);
    printf("%d/%d / %d/%d = %d/%d\n", a.num, a.denom, b.num, b.denom, div_res.num, div_res.denom);

    return 0;
}
