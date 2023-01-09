#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0 && j % 2 == 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
