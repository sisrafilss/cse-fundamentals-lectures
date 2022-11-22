#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary
{
    char str[50];
};

struct Binary to_binary(unsigned int num, int k);
void reverse_str(char str[]);
bool get_bit(unsigned int mask, int k);
unsigned int set_bit(unsigned int mask, int k);
unsigned int clear_bit(unsigned int mask, int k);
unsigned int flip_bit(unsigned int mask, int k);







int main()
{
    int x = 54;
    printf("%d = %s\n", x, to_binary(x, 8).str);

    for (int i = 0; i < 8; i++)
    {
        printf("%dth bit = %d\n", i, get_bit(x, i));
        printf("Set %dth bit = %s\n", i, to_binary(set_bit(x, i), 8).str);
        printf("Clear %dth bit = %s\n", i, to_binary(clear_bit(x, i), 8).str);
        printf("Flip %dth bit = %s\n", i, to_binary(flip_bit(x, i), 8).str);
        printf("\n");
    }

    return 0;
}


/*
00110110
00001000
*/


bool get_bit(unsigned int mask, int k)
{
    return (mask & (1 << k)) != 0;
}

unsigned int set_bit(unsigned int mask, int k)
{
    return mask | (1 << k);
}

unsigned int clear_bit(unsigned int mask, int k)
{
    return mask & ~(1 << k);
}

unsigned int flip_bit(unsigned int mask, int k)
{
    return mask ^ (1 << k);
}



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
