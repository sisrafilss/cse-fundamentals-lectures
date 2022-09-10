#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

int main()
{
    Queue<int> qu;
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
        arr[i] = x;
        if (x > mx)
        {
            mx = x;
        }
    }

    cout << "mx = " << mx << endl;

    int freq[mx+1] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int m;
    cin >> m;
    int sec_arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> sec_arr[i];
    }

    cout << endl;
    for (int i = 0; i < m; i++)
    {
        if (sec_arr[i] > mx)
        {
            cout << -1 << endl;
            continue;
        }
        if (freq[sec_arr[i]] > 0)
        {
            cout << freq[sec_arr[i]] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }


    return 0;
}
