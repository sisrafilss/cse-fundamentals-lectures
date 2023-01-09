#include<stdio.h>
#include<math.h>

int main()
{
    long long n;
    scanf("%lld", &n);

   if (n >= ((pow(2, 31))*-1) && n <= (pow(2, 31) - 1))
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }


    return 0;
}
