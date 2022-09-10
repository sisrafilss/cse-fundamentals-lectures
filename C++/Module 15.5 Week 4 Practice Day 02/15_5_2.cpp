#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int A[n][n], B[n][n], C[n][n];

    // Taking input for A
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    // Taking input for B
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    // Multiply A and B (C = A * B)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int mul = 0;
            for (int k = 0; k < n; k++)
            {
                mul += (A[i][k] * B[k][j]);
            }
            C[i][j] = mul;
        }
    }

    // Printing C (multiplication of A and B)
    cout << endl;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }



    return 0;

}
