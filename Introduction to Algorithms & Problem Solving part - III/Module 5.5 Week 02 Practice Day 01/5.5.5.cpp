#include<bits/stdc++.h>

using namespace std;
const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];



vector<int> BFS(int src)
{
    vector<int> v;
    queue<int> q;
    q.push(src);
    visited[src] = true;
    
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        // printf("%d ", front);
        v.push_back(front);
        
        for (int v: adj_list[front])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return v;
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
    
    vector<int> v_of_2 = BFS(2);
    // vector<int> v_of_6 = BFS(6);

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



    

    // for (int i = 0; i < nodes; i++)
    // {
    //     printf("%d -> ", i);
    //     for (int v: adj_list[i])
    //     {
    //         printf("%d ", v);
    //     }
    //     printf("\n");
    // }

    return 0;
}