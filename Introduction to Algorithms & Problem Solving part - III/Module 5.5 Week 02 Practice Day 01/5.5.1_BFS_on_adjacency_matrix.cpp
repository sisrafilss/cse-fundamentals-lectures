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


#include<bits/stdc++.h>

using namespace std;
const int N = 100;

int adj_matrix[N][N];
bool visited[N];

void BFS(int src, int nodes)
{
    queue<int> q;
    visited[src] = true;
    q.push(src);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        printf("%d ", front);

        for (int i = 0; i < nodes; i++)
        {
            if (adj_matrix[front][i])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
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
    BFS(0, nodes);

    return 0;
}