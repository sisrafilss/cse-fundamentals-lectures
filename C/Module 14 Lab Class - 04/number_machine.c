#include<stdio.h>
#include<math.h>

int main()
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int sequence[10];
    for (int i = 0; i < 10; i++)
    {
        sequence[i] = abs(numbers[i] - 9);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", sequence[i]);
    }

    return 0;
}


/*

9 0 1 2 3 4 5 6 7 8
0 9 8 7 6 5 4 3 2 1
  8
  7
*/
