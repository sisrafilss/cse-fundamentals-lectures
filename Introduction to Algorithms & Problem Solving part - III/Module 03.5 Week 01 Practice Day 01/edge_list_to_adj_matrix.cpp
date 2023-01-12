#include<bits/stdc++.h>

using namespace std;

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
    printf("\n");

    // Edge list to Adjacency Matrix
    int matrix[nodes][50] = {};
    for (int i = 0; i < edges; i++)
    {
        int u = edg_lst[i][0];
        int v = edg_lst[i][1];
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
    printAdjMatrix(matrix, nodes);

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