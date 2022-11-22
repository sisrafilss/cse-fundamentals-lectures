
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

    int answer = 0, max_value = score[0], min_value = score[0];
    for (int i = 1; i < n; i++)
    {
        if (score[i] > max_value || score[i] < min_value)
        {
            answer++;
        }

        if (score[i] > max_value)
        {
            max_value = score[i];
        }
        if (score[i] < min_value)
        {
            min_value = score[i];
        }
    }

    printf("%d", answer);

    return 0;
}
