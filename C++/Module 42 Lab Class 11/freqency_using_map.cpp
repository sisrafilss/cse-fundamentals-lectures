#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto i: m)
    {
        cout << i.first << " = " << i.second << endl;
    }

    return 0;
}
/*
Input:
10
2 1 1 2 2 300 4 9 4 3 5

Output:
1 = 2
2 = 3
3 = 1
4 = 2
9 = 1
300 = 1
*/

