#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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

    cout << "Before Sort: ";
    print_array(arr, n);
    cout << endl;

    // Counting Sort
    // Step a
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    // Step b
    int freq[mx+1] = {0};

    // Step c
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Step d
    int cum[mx+1] = {0};
    cum[1] = freq[1];
    for (int i = 2; i <= mx; i++)
    {
        cum[i] = freq[i] + cum[i-1];
    }

    // Step e
    int Final[n];
    for (int i = n - 1; i >= 0; i--)
    {
        cum[arr[i]]--;
        int k = cum[arr[i]];
        Final[k] = arr[i];
    }

    cout << "After Sort: ";
    print_array(Final, n);
    cout << endl;


    return 0;
}
