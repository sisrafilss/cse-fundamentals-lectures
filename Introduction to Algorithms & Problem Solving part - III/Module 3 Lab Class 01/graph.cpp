
/*
Following Graph is represented in the code.
Graph:
     0 -------- 1
               / \
              2---3
*/

#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int nodes = 4;

    int matrix[nodes][nodes] = {};

    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[1][3] = 1;
    matrix[3][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    // print the matrix
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}