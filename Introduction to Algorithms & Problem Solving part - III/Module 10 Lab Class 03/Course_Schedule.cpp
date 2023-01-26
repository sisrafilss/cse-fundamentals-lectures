/*
Problem Name: Course Schedule
Link: https://cses.fi/problemset/task/1679

Example

Input:
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2
*/


#include<bits/stdc++.h>

using namespace std;

const int N = 2e5;

vector<int> adj_list[N];
int visited[N];
stack<int> st;

void dfs(int src)
{
    visited[src] = 1;
    for (int adj_node: adj_list[src])
    {
        if (!visited[adj_node]) dfs(adj_node);
    }
    st.push(src);
}


int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    for (int i = 1; i <= nodes; i++)
    {
        if (!visited[i]) dfs(i);
    }

    while (!st.empty())
    {
        printf("%d ", st.top());
        st.pop();
    }

    return 0;
}