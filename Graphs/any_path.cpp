#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;

void addEdge(int src, int dest, bool bi_dir)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end)
{
    if (curr == end)
        return true;
    visited.insert(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            bool result = dfs(neighbour, end);
            if (result)
                return true;
        }
    }
    return false;
}
bool anyPath(int src, int dest)
{
    return dfs(src, dest);
}
int main()
{
    int v;
    cout << "Enter the number of vertices:";
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cout << "Enter the number of edges:";
    cin >> e;
    visited.clear();

    cout << "Enter the edges:";
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, 0);
    }
    cout << anyPath(0, 6) << endl;
    return 0;
}