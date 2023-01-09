#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, paid;
    cin >> n;
    if (n < 15)
    {
        paid = 800 * n;
    }
    else
    {
        int retrn = 200 * (n / 15);
        paid = (n * 800) - retrn;
    }

    cout << paid;

    return 0;
}
