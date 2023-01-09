#include<stdio.h>

int main()
{
    FILE *input_file = fopen("int_arr.txt", "r");
    if (input_file == NULL)
    {
        printf("Opps! Input file not found\n");
        return 1;
    }
    FILE *output_file = fopen("int_sum_log.txt", "w");

    int t;
    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        fprintf(output_file, "Case %d: %d\n", j + 1, sum);
    }



    return 0;
}
