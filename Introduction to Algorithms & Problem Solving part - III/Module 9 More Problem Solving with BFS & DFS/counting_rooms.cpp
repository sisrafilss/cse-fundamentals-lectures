/*
Problem Link: https://cses.fi/problemset/task/1192/

Input:
5 8
########
#..#...#
####.#.#
#..#...#
########
*/


#include<bits/stdc++.h>

using namespace std;

const int N = 2002;
int maze[N][N];
int visited[N][N];

int rows, cols;


int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(pair<int, int> src)
{
    visited[src.first][src.second] = true;
    
    for (int i = 0; i < 4; i++)
    {
        int x = src.first + dx[i];
        int y = src.second + dy[i];

        if (x >= 0 && x < rows && y >= 0 && y < cols && !visited[x][y])
        {
            dfs({x, y});
        }
    }
}


pair<int, int> isUnvisited()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (!visited[i][j])
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}



int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < cols; j++)
        {
            if (s[j] == '.')
            {
                maze[i][j] = 1;
            }
            else if (s[j] == '#')
            {
                visited[i][j] = true;
            }
        }
    }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d\t", maze[i][j]);
    //     }
    //     cout << endl;
    // }

    int ans = 0;
    while (true)
    {
        pair<int, int> unvisited_pos = isUnvisited();
        if (unvisited_pos == pair<int, int>(-1, -1))
        {
            break;
        }
        dfs(unvisited_pos);
        ans++;

    }
    printf("%d\n", ans);

    return 0;
}