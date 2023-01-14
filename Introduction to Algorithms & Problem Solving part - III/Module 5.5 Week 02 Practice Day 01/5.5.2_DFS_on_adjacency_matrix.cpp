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
0 1 2 3 5 4 
*/


#include<bits/stdc++.h>

using namespace std;
const int N = 100;

int adj_matrix[N][N];
bool visited[N];

void DFS(int src, int nodes)
{
    printf("%d ", src);
    visited[src] = true;

    for (int i = 0; i < nodes; i++)
    {
        if (adj_matrix[src][i])
        {
            if (!visited[i]) 
            {
                DFS(i, nodes);
            }
        }
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
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }
    
    // int src = 0;
    DFS(0, nodes);

    return 0;
}