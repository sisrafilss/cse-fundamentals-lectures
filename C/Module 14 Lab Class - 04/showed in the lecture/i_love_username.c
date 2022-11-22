#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            continue;
        }
        bool is_max = true, is_min = true;
        for (int j = 0; j < i; j++)
        {
            if (score[j] <= score[i])
            {
                is_max = false;
            }
            if (score[j] >= score[i])
            {
                is_min = false;
            }
        }
        if (is_min || is_max)
        {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}
