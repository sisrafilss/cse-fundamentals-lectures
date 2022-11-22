#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, y, cost_k, cost_rest, total;
    cin >> n >> k >> x >> y;

    if (n > k)
    {
        cost_k = k * x;
        cost_rest = (n - k) * y;
        total = cost_k + cost_rest;
    }
    else
    {
        total = n * x;
    }

    cout << total;

    return 0;
}
