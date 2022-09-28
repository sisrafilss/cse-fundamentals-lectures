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
    int largest = current;
    int leftChild = current * 2 + 1;
    int rightChild = current * 2 + 2;

    if (leftChild < n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
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


void heapSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        printArray(arr, n);
        cout << endl << endl << endl;
        heapify(arr, i, 0);

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
//
//    cout << "Before heapify: " << endl;
//    printArray(arr, n);
//    cout << endl;

//    int nonLeafStart = n / 2 - 1;
//    for (int i = nonLeafStart; i >= 0; i--)
//    {
//        heapify(arr, n, i);
//    }

//    cout << "After heapify: "<< endl;
//    printArray(arr, n);
//    cout << endl;
//
    cout << "After Heap Sort" << endl;
    heapSort(arr, n);
    printArray(arr, n);
    cout << endl;

    return 0;
}

/*
Input:
9
2 10 1 5 4 8 3 8 7

Output: 10 8 8 7 4 1 3 5 2


*/


