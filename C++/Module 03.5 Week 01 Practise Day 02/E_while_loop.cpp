#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
        return 0;
    }
    int freq[n + 1];
    for (int i = 0; i <= n; i++)
    {
        freq[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int tmp = i, cnt = 0;
        while (tmp > 0)
        {
            if (tmp % 2 != 0) break;
            if (tmp % 2 == 0)
            {
                cnt++;
                tmp /= 2;
            }
        }
        freq[i] = cnt;
    }

    int biggest = freq[0], big_idx = 0;
    for (int i = 1; i <= n; i++)
    {
      if (freq[i] > biggest)
      {
          biggest = freq[i];
          big_idx = i;
      }
    }

    cout << big_idx;

    return 0;
}
