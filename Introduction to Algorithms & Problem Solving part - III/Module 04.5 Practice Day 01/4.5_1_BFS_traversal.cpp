#include<bits/stdc++.h>

using namespace std;

int level[100];

void BFS(vector<int> adj_lst[], int src, int nodes)
{
    memset(level, -1, sizeof(level));
    queue<int> q;
    static vector<bool> visited(nodes, false);
    q.push(src);
    level[src] = 0;

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
                level[v] = level[front] + 1;
            }
        }

    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int nodes, edges;
    cin >> nodes >>edges;
    vector<int> adj_lst[nodes + 1];

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_lst[u].push_back(v);
        adj_lst[v].push_back(u);
    }

    for (int i = 0; i < nodes + 1; i++)
    {
        printf("%d -> ", i);
        for (int v: adj_lst[i])
        {
            printf("%d ", v);
        }
        printf("\n");
    }

    printf("\nBFS Traversal:\n");
    BFS(adj_lst, 1, nodes+1);
    printf("\n");

    printf("Level of 8 is %d\n", level[8]);
    printf("Level of 2 is %d\n", level[2]);
    printf("Level of 6 is %d\n", level[6]);
    printf("Level of 3 is %d\n", level[3]);
    printf("Level of 4 is %d\n", level[4]);
    printf("Level of 1 is %d\n", level[1]);

    return 0;
}

/*
Input:
8 11
1 4
1 2
2 5
2 7
2 8
2 3
3 4
5 6
5 7
5 8
7 8

Output:

*/