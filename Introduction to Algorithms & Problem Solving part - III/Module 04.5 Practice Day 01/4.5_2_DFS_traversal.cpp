#include<bits/stdc++.h>

using namespace std;

vector<int> adj_lst[100];
bool visited[100];


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

   DFS(4);


    return 0;
}

/*
9 8
4 3
4 9
4 1
1 2
2 7
2 5
5 6
5 8

Output:
4 3 9 1 2 7 5 6 8 
*/