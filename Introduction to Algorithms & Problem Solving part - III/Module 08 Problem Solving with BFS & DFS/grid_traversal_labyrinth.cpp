/*
5 8
########
#.A#...#
#.##.#B#
#......#
########
*/
#include<bits/stdc++.h>

using namespace std;

int const N = 2002;

int maze[N][N];
bool visited[N][N];
int level[N][N];
int m, n;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = true;
    level[src.first][src.second] = 0;

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

            if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && maze[new_x][new_y] != -1 && !visited[new_x][new_y])
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = true;
                level[new_x][new_y] = level[x][y] + 1;
            }
        }
    }

}

int main(void)
{   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    pair<int, int> src, dst;

    
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
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

    if (level[dst.first][dst.second] != 0)
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