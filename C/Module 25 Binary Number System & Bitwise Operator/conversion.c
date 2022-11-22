#include<stdio.h>
#include<string.h>


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

// Binary to integer (decimal) - Method 1
int binary_to_int(char str[])
{
    unsigned int ans = 0;
    int len = strlen(str);

    for (int i = len - 1, p2 = 1; i >= 0; i--, p2 *= 2)
    {
        int bit = str[i] - '0';
        if (bit == 1)
        {
            ans += p2;
        }
    }
    return ans;
}


// Binary to integer (decimal) - Method 2
unsigned int binary_to_int2(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;

    for (int i = 0; i < len; i++)
    {
        int bit = str[i] - '0';
        ans = ans * 2 + bit;
    }
    return ans;
}


// Decimal to Binary
void to_binary(unsigned int val, char str[])
{
    int idx = 0;
    while (val > 0)
    {
        int digit = val % 2;
        val /= 2;
        str[idx] = digit + '0';
        idx++;
    }
    str[idx] = '\0';
    reverse_str(str);
}



int main()
{
    int decimal;
    scanf("%d", &decimal);
    char binary[100];

    to_binary(decimal, binary);

    printf("Binary = %s\n", binary);

    return 0;
}

