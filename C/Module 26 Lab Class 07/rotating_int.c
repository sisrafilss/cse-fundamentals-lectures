#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary
{
    char str[50];
};

struct Binary to_binary(unsigned int num, int k);
void reverse_str(char str[]);
unsigned char right_rotate(unsigned char mask, int k);
unsigned char left_rotate(unsigned char mask, int k)



int main()
{
    int x = 55;
    printf("%d = %s\n", x, to_binary(x, 8).str);



    for (int i = 0; i < 8; i++)
    {
        printf("Right rotate %d = %s\n", i, to_binary(right_rotate(x, i), 8).str);

    }

    return 0;
}

// Right rotate
unsigned char right_rotate(unsigned char mask, int k)
{
    int last_k = mask & ((1 << k) - 1);
    return (mask >> k) | (last_k << (8 - k));
}

// Left Rotate
unsigned char left_rotate(unsigned char mask, int k)
{
    int
}

/*
num =      12345678
RR -2 =    78123456

0001 0101 &
0000 0111 // k = 3 || 1 << k -> 0000 0100 (8) - 1 => 7 -> 111
0001 0101

*/


struct Binary to_binary(unsigned int num, int k)
{
    struct Binary ans;
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

    int rem = k - strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (i < rem)
        {
            ans.str[i] = '0';
        }
        else
        {
            ans.str[i] = str[i - rem];
        }
    }
    ans.str[k] = '\0';

    return ans;
}

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
