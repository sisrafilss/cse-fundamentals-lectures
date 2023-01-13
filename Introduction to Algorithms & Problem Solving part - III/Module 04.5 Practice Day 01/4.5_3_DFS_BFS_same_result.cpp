#include<bits/stdc++.h>

using namespace std;

vector<int> adj_lst[100];
bool visited[100];


void BFS(int src)
{
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        printf("%d ", front);
        visited[front] = true;
        for (int v: adj_lst[front])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }

    }
}


void DFS(int src)
{
    printf("%d ", src);
    visited[src] = true;
    for (int v: adj_lst[src])
    {
        if (!visited[v]) DFS(v);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int nodes, edges;
    cin >> nodes >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_lst[u].push_back(v);
        adj_lst[v].push_back(u);
    }

    printf("BFS: ");
    BFS(1);
    printf("\n");

    memset(visited, false, sizeof(visited));
    printf("DFS: ");
    DFS(1);
    printf("\n");


    return 0;
}