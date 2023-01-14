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
const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        printf("%d ", front);
        
        for (int v: adj_list[front])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
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
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    int src = 0;
    BFS(src);

    return 0;
}