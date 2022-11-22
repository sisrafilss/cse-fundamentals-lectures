#include<bits/stdc++.h>
using namespace std;

class Priority_Queue
{
private:
    vector<int> v;
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    int leftChild(int i)
    {
        return (i * 2) + 1;
    }
    int rightChild(int i)
    {
        return (i * 2) + 2;
    }


    /*
    // Heapify for min-heap
    void heapify(int start)
    {
        int smallest = start;
        int left = leftChild(start);
        int right = rightChild(start);

        if (left < v.size() && v[left] < v[smallest])
        {
            smallest = left;
        }
        if (right < v.size() && v[right] < v[smallest])
        {
            smallest = right;
        }
        if (smallest != start)
        {
            swap(v[start], v[smallest]);
            heapify(smallest);
        }
    }
    */


    // Heapify for max-heap
    void heapify(int start)
    {
        int largest = start;
        int left = leftChild(start);
        int right = rightChild(start);

        if (left < v.size() && v[left] > v[largest])
        {
            largest = left;
        }
        if (right < v.size() && v[right] > v[largest])
        {
            largest = right;
        }
        if (largest != start)
        {
            swap(v[start], v[largest]);
            heapify(largest);
        }
    }


public:

    /*
    // Push for min heap
    void Push(int val)
    {
        v.push_back(val);
        int ami = v.size() - 1;
        while (ami > 0 && v[ami] < v[parent(ami)])
        {
            swap(v[ami], v[parent(ami)]);
            ami = parent(ami);
        }
    }
    */

    // Push for max heap
    void Push(int val)
    {
        v.push_back(val);
        int ami = v.size() - 1;
        while (ami > 0 && v[ami] > v[parent(ami)])
        {
            swap(v[ami], v[parent(ami)]);
            ami = parent(ami);
        }
    }


    void Pop()
    {

        v[0] = v[v.size() - 1];
        v.pop_back();
        heapify(0);
    }

    int Top()
    {
        return v[0];
    }
    bool Empty()
    {
        return v.size() == 0;
    }
    void printVector()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
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
            heapify(arr, i, 0);
        }
        printArray(arr, n);
        cout << endl << end << endl;
    }


};

int main()
{
    Priority_Queue PQ;

//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int x;
//        cin >> x;
//        PQ.Push(x);
//
//    }
//    cout << "Vector: ";
//    PQ.printVector();
//    cout << endl;
//
//    while (!PQ.Empty())
//    {
//        cout << PQ.Top() << " ";
//        PQ.Pop();
//    }
//    cout << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    PQ.heapSort(arr, n);

    return 0;
}

/*

6
20 50 40 5 30 15


8
10 40 20 8 99 9 15 17

7
40 50 100 40 15 30 10
*/

















