#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        // direction-0 undirected graph
        // direction-1 directed graph
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList()
    {
        for (auto ele : adj)
        {
            cout << ele.first << "->";
            for (auto i : ele.second)
            {
                cout << i << ",";
            }
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of nodes:";
    cin >> n;
    int m;
    cout << "Enter the number of edges:";
    cin >> m;
    graph g;
    cout << "Enter the edges:";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printAdjList();
    return 0;
}