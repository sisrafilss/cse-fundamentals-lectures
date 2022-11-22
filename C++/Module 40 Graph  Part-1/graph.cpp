#include<bits/stdc++.h>
using namespace std;

// define type of edge weight pair for using repeatedly
typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V; // Number of vertice
    list <edgeWeightPair> *adj;
public:
    // Constructor
    Graph(int V)
    {
        this->V = V; // assign the value number of vertice
        adj = new list<edgeWeightPair> [V]; // creating array list
    }
    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    void print_adj()
    {
        for (int i = 0; i < V; i++)
        {
            list<edgeWeightPair>:: iterator it;
            for (it = adj[i].begin(); it != adj[i].end(); it++)
            {
                cout << "(" <<  (*it).first << "," << (*it).second << ") ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int V, E; // V is the number of Vertice/Nodes and E is the number of Edges
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int u, v, w; // u = current vertice value, v = value of vertice u connected with, w = weight of the connection
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    g.print_adj();

    return 0;
}

/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 4
2 5 8

*/




