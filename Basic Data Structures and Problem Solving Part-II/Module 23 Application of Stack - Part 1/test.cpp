#include<bits/stdc++.h>
using namespace std;

template<typename T> T myMax(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << myMax<int>(5, 2) << endl;
    cout << myMax<double>(5.2, 5.4) << endl;
    cout << myMax<char>('a', 'b') << endl;

    return 0;
}

// 01970 109 796
