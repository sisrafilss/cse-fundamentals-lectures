#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int arr[n], pref[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pref[0] = 0;
    pref[1] = arr[0];
    for (int i = 1; i <= n; i++)
    {
       pref[i] = pref[i-1] + arr[i-1];
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int j, k;
        cin >> j >> k;
        cout << pref[k] - pref[j - 1] << endl;
    }

//    for (int i = 0; i < n; i++)
//    {
//        cout << pref[i] << " ";
//    }
//    cout << endl;



    return 0;
}
