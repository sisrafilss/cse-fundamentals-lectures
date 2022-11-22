#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool allowed = true;
        int swap_count = 0;
        for (int i = 0; i < n; i++)
        {
            int swp = arr[i] - 1 - i;
            if (swp > 2)
            {
                cout << "Not Allowed" << endl;
                allowed = false;
                break;
            }
        }

        // Bubble Sort
        if (allowed)
            {
                for (int i = 0; i < n; i++)
                {
                    int flag = 0;
        //            cout << "Iteration " << i << ": " << endl;
                    for (int j = 0; j < n - 1 - i; j++) // avoid redundant test by adding j < n-1-i
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                            flag = 1;
                            swap_count++;

                        }
        //                print_array(arr, n);
                    }
                    // Stop the loop after completed sorting
                    if (flag == 0)  break;
                }
            }

        if (allowed)
        {
            cout << swap_count << endl;
        }
    }

    return 0;
}
