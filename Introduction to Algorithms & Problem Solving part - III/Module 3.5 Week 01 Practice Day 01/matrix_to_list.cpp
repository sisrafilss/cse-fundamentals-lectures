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

    // Adjacency Matrix
    int matrix[nodes][50] = {};
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
    printAdjMatrix(matrix, nodes);


    // Adjacency List
    vector<int> adj_lst[nodes];
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (matrix[i][j] != 0)
            {
                adj_lst[i].push_back(j);
                // adj_lst[j].push_back(i);
            }

        }
    }
    printAdjList(adj_lst, nodes); 

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