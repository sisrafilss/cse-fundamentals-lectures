#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
//    int n;
//    scanf("%d", &n);

//    for (int i = 1000; i < n; i++)
//    {
//       int inp;
//       scanf("%d", &inp);
//       if (inp % 3 == 0 || inp % 10 == 3)
//       {
//           continue;
//       }
//       printf("%d\n", inp);
//    }

    int x = 1000;
    while (true)
    {
        if (x % 3 == 0 || x % 10 == 3)
       {
          break;
       }
      x++;
    }
    printf("%d", x);


    return 0;
}

