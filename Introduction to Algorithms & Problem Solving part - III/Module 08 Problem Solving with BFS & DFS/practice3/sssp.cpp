/*
Input Graph:

0 ------- 1 ---- 2 ---- 3
          |      |
          |      |
          4 ---- 5


Input:
6 6
0 1
1 2
2 3
1 4
2 5
4 5

Expected Output:
0 1 2 4 3 5
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 10e5;
vector<int> adj_list[N];
int visited[N];

int level[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    level[src] = 0;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        // printf("%d ", front);

        for (int adj_node : adj_list[front])
        {
            if (!visited[adj_node])
            {
                visited[adj_node] = 1;
                q.push(adj_node);
                level[adj_node] = level[front] + 1;
            }
        }
    }
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
        adj_list[v].push_back(u);
    }

    // print adj_list
    // for (int i = 0; i < nodes; i++)
    // {
    //     printf("%d -> ", i);
    //     for (int v: adj_list[i])
    //     {
    //         printf("%d ", v);
    //     }
    //     printf("\n");
    // }

    bfs(0);

    // print level
    for (int i = 0; i < nodes; i++)
    {
        printf("%d - level - %d\n", i, level[i]);
    }

    return 0;
}