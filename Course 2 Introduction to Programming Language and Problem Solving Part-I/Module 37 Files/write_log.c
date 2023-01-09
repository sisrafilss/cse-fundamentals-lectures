#include<stdio.h>

int main()
{
    FILE *log_file = fopen("log_file.txt", "a");
    FILE *input_file = fopen("input_file.txt", "r");
    if (input_file == NULL)
    {
        fprintf(log_file, "Input file not found at 10:11 PM\n");
        return 1;
    }

    return 0;
}
