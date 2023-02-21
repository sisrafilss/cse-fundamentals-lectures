 #include<bits/stdc++.h>

 using namespace std;

const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];

void bfs(int src)
{
    visited[src] = true;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for (int adj_node: adj_list[front])
        {
            if (!visited[adj_node])
            {
                q.push(adj_node);
                visited[adj_node] = true;
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

    for (int i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for (int i = 1; i <= nodes; i++)
    {
        printf("%d -> ", i);
        for (int v: adj_list[i])
        {
            printf("%d ", v);
        }
        printf("\n");
    }

    printf("\nBFS = ");
    bfs(1);

    return 0;
 }