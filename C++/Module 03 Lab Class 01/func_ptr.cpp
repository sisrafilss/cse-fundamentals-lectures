#include<bits/stdc++.h>
using namespace std;

void print(int **x)
{
    **x = 22;

}

int main()
{
    int x = 50;
    int *ptr = &x;
    int **q = &ptr;
    print(q);

    cout << x;

    return 0;
}
