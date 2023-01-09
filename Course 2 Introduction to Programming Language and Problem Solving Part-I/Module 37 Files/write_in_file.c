#include<stdio.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) return 1;
    FILE *output_file = fopen("output.txt", "w");

    int n;
    fscanf(input_file, "%d", &n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        fscanf(input_file, "%d", &x);
        sum += x;
    }

    fprintf(output_file, "Sum -> %d", sum);

    return 0;
}
