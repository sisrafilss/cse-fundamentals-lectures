#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i != n / 2)
            {
                sum += arr[i][j];
            }
            if (n - 1 == i + j)
            {
                sum += arr[i][j];
            }
            if (i == 0 && j != 0 && j != n - 1)
            {
                sum += arr[i][j];
            }
            if (i == n - 1 && j != 0 && j != n - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << sum << endl;



    return 0;
}
