#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        bool prime = true;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime) cout << i << " ";
    }

    return 0;
}
