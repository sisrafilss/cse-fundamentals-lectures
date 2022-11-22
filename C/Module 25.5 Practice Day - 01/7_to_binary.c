#include<stdio.h>

// Decimal to Binary
void to_binary(unsigned int val, char str[], int k)
{
    if (val >= pow(2, k))
    {
        printf("Invalid Input\n");
        return 1;
    }
    char c[k];

    int idx = 0;
    while (val > 0)
    {
        int digit = val % 2;
        val /= 2;
        c[idx] = digit + '0';
        idx++;
    }

    reverse_str(c);

    int rem = k - idx;
    for (int i = 0; i < rem; i++)
    {
        str[i] = '0';
    }
    for (int i = rem, j = 0; i < k; i++, j++)
    {
        str[i] = c[j];
    }

    str[k] = '\0';

//    printf("c=%s", c);
}

// Reverse string
void reverse_str(char str[])
{
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
    }
}

//void add_padding(char str[], int k)
//{
//    int len = strlen(str);
//    int rem = k - len;
//    char c[k];
//    strcpy(c, str);
//
//
//
//    for (int i = 0; i < rem; i++)
//    {
//        str[i] = '0';
//    }
//    for (int i = rem, j = 0; i < k; i++, j++)
//    {
//        str[i] = c[j];
//    }
//    str[k] = '\0';
//}

int main()
{
    unsigned int val, k;
    scanf("%hu %hu", &val, &k);

    char binary[100];
    to_binary(val, binary, k);

    printf("%s\n", binary);

    return 0;
}
