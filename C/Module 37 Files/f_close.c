#include<stdio.h>

int main()
{
    FILE *inptu_file = fopen("input.txt", "r");
    if (inptu_file == NULL) return 1;
    FILE *output_file = fopen("output_file.txt", "w");

    int n;
    fscanf(inptu_file, "%d", &n);
    fprintf(output_file, "%d", n);

    fclose(inptu_file);
    fclose(output_file);

    return 0;
}
