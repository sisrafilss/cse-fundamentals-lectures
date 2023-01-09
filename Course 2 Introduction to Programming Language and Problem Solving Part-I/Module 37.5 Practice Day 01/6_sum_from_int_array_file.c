#include<stdio.h>

int main()
{
    FILE *input_file = fopen("int_arr.txt", "r");
    if (input_file == NULL)
    {
        printf("Opps! Input file not found\n");
        return 1;
    }
    FILE *output_file = fopen("int_arr_sum.txt", "w");

    int n;
    fscanf(input_file, "%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(input_file, "%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    fprintf(output_file, "Sum = %d", sum);

    return 0;
}
