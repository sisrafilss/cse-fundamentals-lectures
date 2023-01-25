/*
Problem Link: https://cses.fi/problemset/task/1668
We will solve this problem using Graph Coloring with DFS

Input:
5 3
1 2
1 3
4 5

*/



#include<bits/stdc++.h>

using namespace std;

const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];
int color[N];

bool dfs(int src)
{
    visited[src] = true;

    for (int adj_node: adj_list[src])
    {
        if (!visited[adj_node]) 
        {
            if (color[src] == 1) color[adj_node] = 2;
            else color[adj_node] = 1;
            bool is_colorable = dfs(adj_node);
            if (!is_colorable) return false;
        }
        else
        {
            if (color[src] == color[adj_node]) return false;
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
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // print graph
    // for (int i = 0; i < nodes; i++)
    // {
    //     printf("%d -> ", i);
    //     for (int v: adj_list[i])
    //     {
    //         printf("%d ", v);
    //     }
    //     printf("\n");
    // }

    bool is_colorable = true;
    for (int i = 1; i <= nodes; i++)
    {
        if (!visited[i])
        {
            color[i] = 1;
            is_colorable = dfs(i);
            if (!is_colorable) break;
        }
    }

    if (is_colorable)
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

    return 0;
}