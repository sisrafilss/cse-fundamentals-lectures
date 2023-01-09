#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int total_percent = 0;
    for (int i = 0; i < n; i++)
    {
       double percent;
       scanf("%lf", &percent);
       total_percent += percent;
    }

    double result;
    if (n == 0)
    {
        result = 0;
    }
    else
    {
         result = total_percent / (double)n;
    }

    printf("%lf", result);

    return 0;
}





