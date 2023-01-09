#include<stdio.h>
#include<string.h>

struct Binary
{
    char str[50];
};

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

unsigned char LeftRotate(unsigned char x, int k)
{
    int finder = ~((128 | 127) &((1 << (8 - k)) - 1));
    int first_k = (x & finder) >> (8 - k);

    return (x << k) | first_k;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);


    printf("%s\n", to_binary(n, 8));
    printf("%s\n", to_binary(LeftRotate(n, k), 8));


    return 0;
}

