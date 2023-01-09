#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int[10]{0};

//    for (int i = 1; i <= 10; i++)
//    {
//        ptr[i - 1] = i;
//    }

    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i] << " ";
    }

    delete ptr;

    return 0;
}
