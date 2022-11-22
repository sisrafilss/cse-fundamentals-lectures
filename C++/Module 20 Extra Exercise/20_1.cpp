#include<bits/stdc++.h>
using namespace std;





int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) // avoid redundant test by adding j < n-1-i
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;

            }
        }
        // Stop the loop after completed sorting
        if (flag == 0)  break;
        cout << endl;
    }

    for (int i = 0; i < k; i++)
    {
        cout << i+1 << "st minimum:" << arr[i];
        if (i < k - 1) cout << ", ";
    }
    cout << endl;

    for (int i = n - 1, j = 0; j < k; i--, j++)
    {
        cout << j+1 << "st minimum:" << arr[i];
        if (j < k - 1) cout << ", ";
    }
    cout << endl;



    return 0;
}
