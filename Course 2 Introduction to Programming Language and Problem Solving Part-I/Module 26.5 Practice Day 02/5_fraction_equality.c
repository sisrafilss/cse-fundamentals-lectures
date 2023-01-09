#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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

bool is_equal(struct Fraction a, struct Fraction b)
{
    struct Fraction a1 = reduce(a);
    struct Fraction b1 = reduce(b);

    double a2 = (double)a1.num / (double)a1.denom;
    double b2 = (double)b1.num / (double)b1.denom;

    if (a2 == b2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    struct Fraction a, b;
    scanf("%d %d", &a.num, &a.denom);
    scanf("%d %d", &b.num, &b.denom);

    if (is_equal(a, b))
    {
        printf("%d/%d and %d/%d are equal.\n", a.num, a.denom, b.num, b.denom);
    }
    else
    {
        printf("%d/%d and %d/%d are not equal.\n", a.num, a.denom, b.num, b.denom);
    }

    return 0;
}
