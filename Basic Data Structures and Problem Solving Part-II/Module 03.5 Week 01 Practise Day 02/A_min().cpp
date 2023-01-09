#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, t;
    cin >> x >> t;
    int rem = x - t;
    if (rem <= 0)
        cout << 0;
    else
       cout << rem;

    return 0;
}
