#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        nums[i] = num;
    }

    int amazing = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            continue;
        }
        bool is_max = false;
        bool is_small = false;

        for (int j = 0; j < i; j++)
        {
            if (nums[j] >= nums[i])
            {
                is_large = true;
            }
            else if (nums[j] <= nums[i])
            {
                is_small = true;
            }
        }
        if (is_large || is_small)
        {
            amazing++;
        }

    }

    printf("%d", amazing);

    return 0;
}
