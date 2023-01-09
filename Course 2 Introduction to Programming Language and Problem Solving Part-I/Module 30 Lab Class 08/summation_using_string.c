#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100], c[100];
    gets(a);
    gets(b);
    strrev(a);
    strrev(b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int i = 0, j = 0, k = 0, carry = 0;
    while (i < len_a && j < len_b)
    {
        int sum = (a[i] - '0') + ( b[j] - '0') + carry;
        c[k] = (sum % 10) + '0'; // c[] = {122}
        carry = sum / 10; // 1
        i++;
        j++;
        k++;
    }

    // a = 999
    // b = 222

    while (len_a > i)
    {
        int sum = (a[i] - '0') + carry;
        c[k] = (sum % 10) + '0';
        carry = sum / 10;
        i++;
        k++;
    }

     while (len_b > j)
    {
        int sum = (b[j] - '0') + carry;
        c[k] = (sum % 10) + '0';
        carry = sum / 10;
        j++;
        k++;
    }

    if (carry > 0)
    {
        c[k] = carry + '0';
        c[k + 1] = '\0';
    }
    else
    {
        c[k] = '\0';
    }


    strrev(c);

    printf("%s\n", c);

    return 0;
}
