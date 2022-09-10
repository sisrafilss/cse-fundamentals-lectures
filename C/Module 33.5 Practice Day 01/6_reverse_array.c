#include<stdio.h>

int get_length(char str[])
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }

    return index;
}

void string_concat(char a[], char b[])
{
    int index = get_length(a);
    int j = 0;
    while (b[j] != '\0')
    {
        a[index] = b[j];
        index++;
        j++;
    }
    a[index] = '\0';
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int n, int arr[])
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    reverse_array(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

