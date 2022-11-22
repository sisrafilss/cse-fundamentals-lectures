#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    // Bubble Sort
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        cout << "Iteration " << i << ": " << endl;
        for (int j = 0; j < n - 1 - i; j++) // avoid redundant test by adding j < n-1-i
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;

            }
            print_array(arr, n);
        }
        // Stop the loop after completed sorting
        if (flag == 0)  break;
        cout << endl;
    }

    cout << endl;
    cout << "After Applying Bubble Sort: ";
    print_array(arr, n);


    return 0;
}
