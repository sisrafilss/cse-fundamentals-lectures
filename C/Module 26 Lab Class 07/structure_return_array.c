#include<stdio.h>

struct ArrayHolder
{
    int array[100];
};

struct ArrayHolder makeNArray(int n)
{
    struct ArrayHolder ans;
    for (int i = 0; i < n; i++)
    {
        ans.array[i] = i + 1;
    }

    return ans;
};

int main()
{
    struct ArrayHolder ans = makeNArray(10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ans.array[i]);
    }

    return 0;
}
