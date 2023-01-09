#include<bits/stdc++.h>
using namespace std;

vector<int> v[100];

bool visited[100];

void bfs(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    while (!q.empty())
    {
        pair<int, int> parent  = q.front();
        q.pop();
        if (visited[parent.first]) continue;
        cout << parent.first << " " << parent.second << endl;
        for (int i = 0; i < v[parent.first].size(); i++)
        {
            int child = v[parent.first][i];
            if (!visited[child])
            {
                q.push({child, parent.second + 1});
//                visited[child] = true;
            }
        }
        visited[parent.first] = true;
    }
}


int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));

    cout << endl << endl;
    bfs(0);

    return 0;
}

/*
6 7
1 2
1 0
1 3
3 0
3 4
3 5
4 5
*/
