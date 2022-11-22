#include<stdio.h>

struct Fraction
{
    int num;
    int denom;
};

struct Fraction add(struct Fraction a, struct Fraction b)
{
    struct Fraction sum;
    sum.num = a.num * b.denom + a.denom * b.num;
    sum.denom = a.denom * b.denom;

    return sum;
};

struct Fraction reduce(struct Fraction a)
{
    struct Fraction f;
    int g = gcd(a.num, a.denom);
    f.num = a.num / g;
    f.denom = a.denom / g;

    return f;
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

int main()
{
    struct Fraction a, b;
    scanf("%d %d", &a.num, &a.denom);
    scanf("%d %d", &b.num, &b.denom);

    struct Fraction sum = reduce(add(a, b));



    printf("Sum = %d/%d\n", sum.num, sum.denom);

    return 0;
}
