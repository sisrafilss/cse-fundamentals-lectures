#include<bits/stdc++.h>
using namespace std;

/*
Reverse a Linked List using Stack
Input: 9->7->4->2
Output: 2->4->7->9

Input: 3->2->1
Output: 1->2->3
*/

void print_list(list<int> lst)
{
    list<int>::iterator it = lst.begin();
    while (it != lst.end())
    {
        cout << *it;
        it++;
        if (it != lst.end()) cout << "->";
    }
    cout << endl;
}

void reverseList(list<int>& lst)
{
    stack<int> st;
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        st.push(*it);
    }

    while (!st.empty())
    {
        lst.pop_front();
        int p = st.top();
        lst.push_back(p);
        st.pop();
    }
}

int main()
{
    list<int> lst;
    string inp;
    cin >> inp;
    int len = inp.length();
    for (int i = 0; i < len; i++)
    {
        if (inp[i] >= '0' && inp[i] <= '9')
        {
            lst.push_back(inp[i] - '0');
        }
    }

//    print_list(lst);

    reverseList(lst);

    print_list(lst);


    return 0;
}
