#include<bits/stdc++.h>

using namespace std;

// print adjacency list
void printAdjList(vector<int> adj_lst[], int nodes)
{
    printf("Adjacency List:\n");
    for (int i = 0; i < nodes; i++)
    {
        printf("%d -> ", i);
        for (int j = 0; j < adj_lst[i].size(); j++)
            printf("%d ", adj_lst[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int nodes, edges;
    cin >> nodes >> edges;
    int edg_lst[edges][2];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        edg_lst[i][0] = u;
        edg_lst[i][1] = v;
    }

    // print edge list
    printf("Edge List:\n");
    for (int i = 0; i < edges; i++)
    {
        printf("[%d, %d]\n", edg_lst[i][0], edg_lst[i][1]);
    }

    // convert from edge list to adjacency list
    vector<int> adj_lst[nodes];
    for (int i = 0; i < edges; i++)
    {
        int u = edg_lst[i][0];
        int v = edg_lst[i][1];
        adj_lst[u].push_back(v);
        adj_lst[v].push_back(u);
    }
    printAdjList(adj_lst, nodes);



    return 0;
}

/*
Input:
5 7
0 1
0 2
1 2
1 3
1 4
2 4
3 4

*/