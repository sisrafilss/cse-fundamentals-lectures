#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
       int players, ali_and_hun_height;
       cin >> players >> ali_and_hun_height;
       int heights[players];
       for (int i = 0; i < players; i++)
       {
           cin >> heights[i];
       }
       int ans = 0;
       for (int i = 0; i < players; i++)
       {
           if (heights[i] > ali_and_hun_height)
           {
               ans++;
           }
       }
       cout << ans << endl;
    }

    return 0;
}
