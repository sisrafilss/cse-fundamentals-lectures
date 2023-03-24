#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

vector<int> adj_list[N];
bool visited[N];
int color[N];

bool dfs(int src)
{
    visited[src] = true;
    // color[src] = 1;

    // printf("%d ", src);

    for (int adj_node : adj_list[src])
    {
        if (!visited[adj_node])
        {
            if (color[src] == 1)
            {
                color[adj_node] = 2;
            }
            else
            {
                color[adj_node] = 1;
            }
            visited[adj_node] = true;
            bool is_bicolorable = dfs(adj_node);
            if (!is_bicolorable)
            {
                return false;
            }
        }
        else
        {
            if (color[src] == color[adj_node])
            {
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // dfs(5);

    bool bi_colorable;

    for (int i = 1; i <= nodes; i++)
    {
        if (!visited[i])
        {
            color[i] = 1;
            bi_colorable = dfs(i);
        }
        if (!bi_colorable)
            break;
    }

    if (bi_colorable)
    {
        for (int i = 1; i <= nodes; i++)
        {
            printf("%d ", color[i]);
        }
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }

    // for (int i = 0; i < nodes; i++)
    // {
    //     printf("%d ", color[i]);
    // }

    return 0;
}