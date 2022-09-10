#include<stdio.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    while (1)
    {
        char ch = fgetc(input_file);
        if (ch == EOF)  break;
        fputc(ch, output_file);
    }

    return 0;
}
