#include<bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if (n == 1) return 1;
    return  n + sum(n - 1);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    printf("Sum = %d\n", sum(5));


    return 0;
}