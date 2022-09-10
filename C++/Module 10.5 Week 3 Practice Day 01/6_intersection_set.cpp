#include<bits/stdc++.h>
using namespace std;

void take_input(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}

void intersection(int a[], int x, int b[], int y)
{
    int common[x];
    for (int i = 0; i < x; i++)
    {
        common[i] = -1;
    }

    int p = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                common[p] = a[i];
                p++;
            }
        }
    }

    int common_found = 0;
    for (int i = 0; i < x; i++)
    {
        if (common[i] != -1)
        {
            cout << common[i] << " ";
            common_found = 1;
        }
    }
    if (!common_found)
    {
        cout << "Empty Set" << endl;
    }
}

int main()
{
    int x, y;
    cin >> x;
    int a[x];
    take_input(a, x);

    cin >> y;
    int b[y];
    take_input(b, y);

    intersection(a, x, b, y);


    return 0;
}
