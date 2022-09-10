#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = maximum(arr, n);
    int freq[mx+1] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int cnt = 0;
    for (int i = 1; i <= mx; i++)
    {
        if (freq[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
