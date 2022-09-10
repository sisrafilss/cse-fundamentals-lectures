#include<stdio.h>

int main()
{
    int n;
    printf("Enter Length of Series: ");
    scanf("%d", &n);

   if (n <= 0)
   {
       printf("Invalid Input!\n");
   }

   if (n == 1)
   {
       printf("1\n");
   }
   else if (n == 2 )
   {
       printf("1 1\n");
   }
   else if (n > 2)
   {
       int x = 1, y = 1;
       printf("%d %d ", x, y);
       n -= 2;
       do
       {
          int z = x + y;
          printf("%d ", z);
          x = y;
          y = z;
          n--;
       }
       while (n > 0);

   }


    return 0;
}

