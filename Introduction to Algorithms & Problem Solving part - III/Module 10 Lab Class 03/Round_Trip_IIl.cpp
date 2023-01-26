/*
Problem Name: Round Trip II
Link: https://cses.fi/problemset/task/1678

Example

Input:
4 5
1 3
2 1
2 4
3 2
3 4

Output:
4
2 1 3 2

*/

#include<bits/stdc++.h>

using namespace std;

const int N = 2e5;

vector<int> adj_list[N];
int visited[N];

bool detectCycle(int src)
{
    visited[src] = 1;

    for (int adj_node: adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            bool got_cycle = detectCycle(adj_node);
            if (got_cycle) return true;
        }
        else if (visited[adj_node] == 1)
        {
            return true;
        }
    }
    visited[src] = 2;
    return false;
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    bool got_cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            got_cycle = detectCycle(i);
            if (got_cycle)
            {
                break;
            }
        }
    }

    if (got_cycle)
    {
        printf("Cycle Exists\n");
    }
    else
    {
        printf("No Cycle Detected\n");
    }

    return 0;
}