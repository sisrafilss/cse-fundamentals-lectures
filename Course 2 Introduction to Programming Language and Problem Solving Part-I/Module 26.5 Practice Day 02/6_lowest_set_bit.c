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

int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d", &n);

    struct Binary b = to_binary(n, 8);

    int i = 7;
    for (; i >= 0; i--)
    {
        if (b.str[i] == '1')    break;
    }

    printf("%s\n", b.str);

    printf("Lowest set bit in %d is at position %d.\n", n, 7 - i);

    return 0;
}
