#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1;
    stack<int> st2;

    st1.push(1);
    st1.push(2);
    st1.push(3);

    st2 = st1;

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    cout << st1.top() << endl;


    return 0;
}
