#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int sz, int x)
{
    int indexes[sz+1] = {0};
    bool found = false;
    int cnt = 0;


    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == x)
        {
          indexes[i + 1] = i;
          found = true;
          cnt++;
        }
    }
    if (!found)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND at index position: ";
        for (int i = 1; i < sz+1; i++)
        {
            if (indexes[i] > 0)
            {
                cout << indexes[i];
                if (cnt > 1)
                {
                    cout << ", ";
                    cnt--;
                }
            }
        }
    }
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

    int check_value;
    cin >> check_value;

    linear_search(arr, n, check_value);

    return 0;
}
