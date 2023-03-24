/*
Problem Link: https://cses.fi/problemset/task/1679

Input:
5 3
1 2
3 1
4 5
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 10e5 + 5;

vector<int> adj_list[N];
int visited[N];
stack<int> node_stack;

void topsort(int src)
{
    visited[src] = 1;

    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            topsort(adj_node);
        }
    }
    node_stack.push(src);
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            topsort(i);
        }
    }

    while (!node_stack.empty())
    {
        printf("%d ", node_stack.top());
        node_stack.pop();
    }

    return 0;
}