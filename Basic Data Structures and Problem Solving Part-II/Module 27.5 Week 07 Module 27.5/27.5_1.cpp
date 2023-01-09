#include<bits/stdc++.h>
using namespace std;

/*
Write a program to print all prime numbers from 1 to n.
*/

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool prime = true;
        int half = i / 2;
        for (int j = half; j > 1; j--)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
