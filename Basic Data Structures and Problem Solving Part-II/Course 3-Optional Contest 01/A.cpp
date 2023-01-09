#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 3);

    long long sub = a[2] - a[1];

    if (a[0] >= sub)
    {
        cout << a[2] << endl;
    }
    else
    {
        cout << -1 << endl;
    }


    return 0;
}
/*
Case - 1:
12 15 18
12 14 17
12 13 16
12 12 15
11 12 14
11 11 13
11 10 12
10 10 11
9  10 10
9  9  9
*/

//Case - 2:
//11 12 16
//11 11 15
//11 10 14
//11

//11 13 16
//11 12 15
//11 11 14




