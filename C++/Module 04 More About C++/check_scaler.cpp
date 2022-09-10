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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (a[i][j] > 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    int save;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (i == j)
           {
               if (i == 0 && j == 0)
               {
                   save = a[i][j];
               }
               else
               {
                   if (a[i][j] != save)
                   {
                       cout << "Not Scaler" << endl;
                       return 0;
                   }
               }
           }
        }
    }

    if (save == 1)
    {
        cout << "Identity" << endl;
    }
    else
    {
        cout << "Scaler" << endl;
    }

    return 0;
}
