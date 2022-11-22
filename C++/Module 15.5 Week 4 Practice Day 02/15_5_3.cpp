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

    int mx = arr[0][0];
    int p, q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > mx)
            {
                mx = arr[i][j];
                p = i;
                q = j;
            }
        }
    }

    cout << endl;
    cout << "Max: " << mx << endl;
    cout << "Location: " << "[" << p << "][" << q << "]" << endl;


    return 0;
}
