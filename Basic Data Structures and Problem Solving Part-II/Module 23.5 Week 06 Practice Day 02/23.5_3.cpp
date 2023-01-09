#include<bits/stdc++.h>
using namespace std;


void deleteElement()


int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < arr[i+1])
        {
            deleteElement(arr, i, n);
        }
        else
        {
            deleteElement(arr, i+1, n);
        }
    }


    return 0;
}
