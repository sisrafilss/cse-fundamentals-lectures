#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row = 3, col = 4;
    // declaring two dimentional array or matrix
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
