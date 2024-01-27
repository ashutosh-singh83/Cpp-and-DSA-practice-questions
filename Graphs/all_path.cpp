#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
void addEdge(int src, int dest, bool bi_dir)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allPath(int src, int dest)
{
    vector<int> v;
    dfs(src, dest, v);
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
        addEdge(u, v, 1);
    }
    allPath(0, 4);
    for (auto path : result)
    {
        for (auto ele : path)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}