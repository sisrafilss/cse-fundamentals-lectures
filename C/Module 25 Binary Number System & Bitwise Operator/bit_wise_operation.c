#include<stdio.h>
#include<string.h>

void to_binary(int num, char binary[], int k);
void reverse_str(char str[]);
int binary_to_int(char str[]);

int main()
{

    char num1[50], num2[50];
    int k;
    gets(num1);
//    gets(num2);
    scanf("%d", &k);

    int a = binary_to_int(num1);
//    int b = binary_to_int(num2);

    char binary_a[50];
//    char binary_b[50];
    char binary_c[50];

    to_binary(a, binary_a, k);
//    to_binary(b, binary_b, k);
    to_binary(~a, binary_c, k);

//    printf("%hu = %s\n", a, binary_a);
//    printf("%hu = %s\n", b, binary_b);
    printf("~%s = %s", binary_a, binary_c);


    return 0;
}

void to_binary(int num, char binary[], int k)
{
    char str[50];
    int remainder;
    int idx = 0;
    while(num > 0)
    {
        remainder = num % 2;
        num /= 2;
        str[idx] = remainder + '0';
        idx++;
    }
    str[idx] = '\0';
    reverse_str(str);

//    printf("Reverse: %s\n", str);

    int rem = k - strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (i < rem)
        {
            binary[i] = '0';
        }
        else
        {
            binary[i] = str[i - rem];
        }
    }
    binary[k] = '\0';

//    printf("k = %d, Binary: %s\n", k, binary);
}

// 16 8 4 2 1
//  1 1 0 0 1 -> 10011
//
//25 =

void reverse_str(char str[])
{
    int len = strlen(str);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        int tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
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
