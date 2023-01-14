#include<bits/stdc++.h>

int fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n - 2);
}

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}