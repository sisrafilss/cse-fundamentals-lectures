#include<stdio.h>

int main()
{
    int start, end;
    printf("Input the starting range or number: ");
    scanf("%d", &start);

    printf("Input the ending range of number: ");
    scanf("%d", &end);

   for (int i = start; i < end; i++)
   {
       int sum = 0;
       for (int j = 1; j < i; j++)
       {
           if (i % j == 0)
           {
               sum += j;
           }
       }
       if (sum == i)
       {
           printf("%d ", i);
       }
   }


    return 0;
}



