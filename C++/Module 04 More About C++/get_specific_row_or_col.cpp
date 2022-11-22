#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    // Get specific column number to get its elements
    int get_col;
    cin >> get_col;
     for (int i = 0; i < row; i++)
    {
        cout << a[i][get_col] << " ";
    }

    return 0;
}
