/*
4 5
1 3
2 1
2 4
3 2
3 4
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 10e5 + 1;

vector<int> adj_list[N];
int visited[N];

bool detect_cycle(int src)
{
    visited[src] = 1;

    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            bool cycle = detect_cycle(adj_node);
            if (cycle)
            {
                return true;
            }
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

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    bool is_cycled;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            is_cycled = detect_cycle(i);

            if (is_cycled)
            {
                break;
            }
        }
    }

    if (is_cycled)
    {
        printf("Cycle Exists\n");
    }
    else
    {
        printf("No Cycle Detected\n");
    }

    return 0;
}