#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



void heapify(int arr[], int n, int current)
{
    int largest = current; // here, current is the i'th index calculated by size of array / 2 - 1, Because Non-Leaf node started from here in a complete binary tree based on level order traversal.
    int leftChild = 2 * current + 1;
    int rightChild = 2 * current + 2;

    if (leftChild < n && arr[leftChild] > arr[largest])
    {
        largest = leftChild; // 3
    }

    if (rightChild < n && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }

    if (current != largest)
    {
        swap(arr[current], arr[largest]);
        heapify(arr, n, largest);
    }
}

void printArray(int arr[], int n)
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

    cout << "Before: ";
    printArray(arr, n);

    int nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "After: ";
    printArray(arr, n);

    return 0;
}







/*
9
2 10 1 5 4 8 3 8 7
*/














