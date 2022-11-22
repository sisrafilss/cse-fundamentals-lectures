#include<stdio.h>

int main()
{
    int n;
    printf("Enter Length of Series: ");
    scanf("%d", &n);

   if (n <= 0)
   {
       printf("Invalid Input!\n");
       return 1;
   }

    printf("1 + ");
   for (int i = 2; i <= n; i++)
   {
       printf("1/%d",  i);
       if (i != n)
       {
           printf(" + ");
       }
   }
   printf("\n");

   double sum = 0;
   for (int i = 1; i <= n; i++)
   {
       sum += (1.0 / (float) i);
   }
   printf("Sum of the series is: %lf\n", sum);


    return 0;
}


