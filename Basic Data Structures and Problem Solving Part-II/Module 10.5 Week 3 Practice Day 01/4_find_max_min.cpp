#include<bits/stdc++.h>
using namespace std;

void max_min(int arr[], int sz)
{
    int mx = arr[0], mn = arr[0], mx_idx = 0, mn_idx = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            mx_idx = i;
        }
        if (arr[i] < mn)
        {
            mn = arr[i];
            mn_idx = i;
        }
    }
    cout << "Max: " << mx << ", Index: " << mx_idx << endl;
    cout << "Min: " << mn << ", Index: " << mn_idx << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max_min(a, n);

    return 0;
}
