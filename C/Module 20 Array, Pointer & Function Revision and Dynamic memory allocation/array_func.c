#include<stdio.h>

void makeSqure(int n, int a[], int ans[])
{
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i] * a[i];
    }

    return ans;
}

int main()
{
    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};

    int ans[n];
    makeSqure(n, a, ans); // need to pass the ans array to return it from the function


    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
    // will print -> 1 4 9 16 25

    return 0;
}
