#include <bits/stdc++.h>

using namespace std;

const int N = 1001;

int maze[N][N];
bool visited[N][N];
int n, m;

// prototype
pair<int, int> check_unvisited();
void bfs(pair<int, int>);
bool is_inside(int x, int y);
bool is_safe(int x, int y);

int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int room_cnt = 0;
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
                visited[i][j] = true;
            }
        }
    }

    while (true)
    {
        pair<int, int> unvisited_cell = check_unvisited();

        if (unvisited_cell.first == -1 && unvisited_cell.second == -1)
        {
            break;
        }
        bfs(unvisited_cell);
        room_cnt++;
    }

    printf("%d\n", room_cnt);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d\t", maze[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    return 0;
}

pair<int, int> check_unvisited()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

void bfs(pair<int, int> src)
{
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = true;

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

            if (is_inside(new_x, new_y) && is_safe(new_x, new_y) && !visited[new_x][new_y])
            {
                visited[new_x][new_y] = true;
                q.push(make_pair(new_x, new_y));
            }
        }
    }
}

bool is_inside(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}

bool is_safe(int x, int y)
{
    return !maze[x][y];
}
