#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a + b < 24)
    {
        cout << a + b;
    }
    else
    {
        cout << (a + b) - 24;
    }

    return 0;
}
