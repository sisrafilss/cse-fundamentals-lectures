#include<bits/stdc++.h>
using namespace std;

// define type of edge weight pair for using repeatedly
typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V; // Number of vertice
    list<edgeWeightPair> *adj;
public:
    // Constructor
    Graph(int V)
    {
        this->V = V;  // assign the value number of vertice
        adj = new list<edgeWeightPair> [V]; // creating array list
    }
    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    void printNeighbour(int idx)
    {
        cout << idx << ": ";
        for (auto it = adj[idx].begin(); it != adj[idx].end(); it++)
        {
            cout << "(" << (*it).first << ", " << (*it).second << ")" << " ";
        }
        cout << endl;
    }

    // Breadth First Search (BFS)
    void BFS(int source)
    {
        vector<bool> visited(V, false);
        queue<int> Q;
        visited[source] = true;
        Q.push(source);
        while(!Q.empty())
        {
            int u = Q.front();
            cout << u << " ";
            Q.pop();
            for (auto element:adj[u])
            {
                int v = element.first;
                if (visited[v] != true)
                {
                    visited[v] = true;
                    Q.push(v);
                }
            }
        }
    }
};

int main()
{
    int V, E, source; // V is the number of Vertice/Nodes and E is the number of Edges
    cin >> V >> E >> source;
    Graph g(V);

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w; // u = current vertice value, v = value of vertice u connected with, w = weight of the connection
        g.addEdge(u, v, w);
    }

    // Print all pairs of List array
    for (int i = 0; i < V; i++)
    {
        g.printNeighbour(i);
    }
    cout << endl << endl;

    g.BFS(source);

    return 0;
}

/*
Input:
7 10 0
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8

Output:
0: (1, 7) (2, 1) (5, 3)
1: (0, 7) (3, 11)
2: (0, 1) (3, 3) (5, 8)
3: (1, 11) (2, 3) (6, 1)
4: (6, 4) (5, 6)
5: (0, 3) (6, 2) (4, 6) (2, 8)
6: (3, 1) (5, 2) (4, 4)
*/











