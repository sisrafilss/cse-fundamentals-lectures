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

// print adjacency matrix
void printAdjMatrix(int matrix[][50], int nodes)
{
    printf("Adjacency Matrix:\n");
     for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            printf("%d ", matrix[i][j]);
        }
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
    vector<int> adj_list[nodes];

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    printAdjList(adj_list, nodes);

    // Covert to adjacency matrix
    int matrix[nodes][50] = {};
    for (int i = 0; i < nodes; i++)
    {
        for (int v: adj_list[i])
        {
            matrix[i][v] = 1;
        }
    }

    printAdjMatrix(matrix, nodes);


    return 0;
}

/*
Input:
7
0 1
0 2
1 2
1 4
1 5
2 4
4 5

*/