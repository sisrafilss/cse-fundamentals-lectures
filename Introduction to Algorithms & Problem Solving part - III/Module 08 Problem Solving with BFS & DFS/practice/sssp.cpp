 #include<bits/stdc++.h>

 using namespace std;

const int N = 10e5;

vector<int> adj_list[N];
bool visited[N];
int level[N];

void bfs(int src)
{
    visited[src] = true;
    queue<int> q;
    q.push(src);
    level[src] = 0;

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

    for (int i = 0; i < nodes; i++)
    {
        printf("%d -> ", i);
        for (int v: adj_list[i])
        {
            printf("%d ", v);
        }
        printf("\n");
    }

    printf("\nBFS = ");
    bfs(0);
    cout << endl << endl;

    for (int i = 0; i < nodes; i++)
    {
        printf("node %d -> level: %d\n", i, level[i]);
    }

    return 0;
 }