#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
       int number;
       scanf("%d", &number);
       if (number < 38)
       {
           printf("%d\n", number);
       }
       else if (number >= 38 && number <= 100)
       {
           if ((number % 5) >= 3)
           {
               number += ( 5 - (number % 5));
               printf("%d\n", number);
           }
           else
           {
               printf("%d\n", number);
           }
       }
   }

    return 0;
}


