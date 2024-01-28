#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
#include <climits>
#include <queue>
using namespace std;

vector<list<int>> graph;
void addEdge(int src, int dest, bool bi_dir)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void dfs(int src, unordered_set<int> &visited, vector<int> &dfsArray)
{
    visited.insert(src);
    dfsArray.push_back(src);
    for (auto neigbour : graph[src])
    {
        if (!visited.count(neigbour))
        {
            dfs(neigbour, visited, dfsArray);
        }
    }
}
vector<int> dfsOfGraph(int src)
{
    vector<int> dfsArray;
    unordered_set<int> visited;
    visited.insert(src);
    dfs(src, visited, dfsArray);
    return dfsArray;
}
int main()
{
    int v;
    cin >> v;

    graph.resize(v, list<int>()); // 0 based indexed graph. If we want 1 based then size will be v+1 and graph[0]={}
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, 1);
    }

    vector<int> dfsArr = dfsOfGraph(0);
    for (int i = 0; i < dfsArr.size(); i++)
    {
        cout << dfsArr[i] << " ";
    }
    cout << endl;
    return 0;
}