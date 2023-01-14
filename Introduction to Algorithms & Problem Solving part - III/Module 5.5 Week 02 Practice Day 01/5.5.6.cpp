#include<bits/stdc++.h>

using namespace std;
const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];

vector<int> v_of_2;

void DFS(int src)
{
    // printf("%d ", src);
    v_of_2.push_back(src);
    visited[src] = true;

    for (int v: adj_list[src])
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
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    DFS(2);

    bool found = false;
    for (int v: v_of_2)
    {
        if (v == 6)
        {
            printf("6 and 2 are connected\n");
            return 0;
        }
    }
    printf("6 and 2 are not connected\n");

    return 0;
}