#include <bits/stdc++.h>

using namespace std;

const int N = 2002;

int maze[N][N];
int visited[N][N];
int level[N][N];

 int n, m;
 pair<int, int> src, dst;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool is_inside(int x, int y)
{
    if (x < n && y < m &&x >= 0 && y >= 0) return true;
    return false;
}

bool is_open(int x, int y)
{
    if (maze[x][y] == -1) return false;
    else return true;
}

void bfs(pair<int, int> src)
{
    queue <pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1;

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

            if (is_inside(new_x, new_y) && is_open(new_x, new_y) && !visited[new_x][new_y]) 
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
            }
        }

    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   
    cin >> n >> m;

    

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

    if (level[dst.first][dst.second])
    {
        printf("YES\n");
        printf("%d\n", level[dst.first][dst.second]);
    }
    else
    {
        printf("NO\n");
    }

    // int cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (visited[i][j] == 1) cnt++;
    //     }
    // }

   

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d\t", maze[i][j]);
    //     }
    //     cout << endl;
    // }
    // cout << endl << endl;

    // printf("src = {%d, %d}\n", src.first, src.second);
    // printf("dst = {%d, %d}\n", dst.first, dst.second);

    return 0;
}