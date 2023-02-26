/*
Problem Link: https://cses.fi/problemset/task/1193
*/

#include<bits/stdc++.h>

using namespace std;

const int N = 2002;

int maze[N][N];
int visited[N][N];
int level[N][N];
int n, m;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool is_inside(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}

bool is_free(int x, int y)
{
    return !maze[x][y];
}

void bfs(pair<int, int> src)
{
    queue< pair<int, int> > q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    q.push(src);

    while (!q.empty())
    {
        pair<int, int> front = q.front();
        q.pop();
        int x = front.first;
        int y = front.second;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (is_inside(new_x, new_y) && is_free(new_x, new_y) && !visited[new_x][new_y])
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
            }
        }
    }
}


int main(void)
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    
    cin >> n >> m;

    pair<int, int> src, dst;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
            {
                maze[i][j] = -1;
            }
            else if (s[j] == 'A')
            {
                src = {i, j};
            }
            else if (s[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }

    bfs(src);
    
    bool possible = false;

    if (level[dst.first][dst.second])
    {
         printf("YES\n");
        printf("%d\n", level[dst.first][dst.second]);
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}