#include<stdio.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");

    if (input_file == NULL) return 1;

    int count = 0;
    while (1)
    {
        char ch = fgetc(input_file);
        if (ch == EOF)  break;
        count++;
    }

    printf("Characters: %d\n", count);

    return 0;
}
