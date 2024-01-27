#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
#include <climits>
#include <queue>
using namespace std;
int v;
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
void bfs(int src, vector<int> &dist)
{
    queue<int> qu;
    visited.clear();
    visited.insert(src);
    qu.push(src);
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    while (!qu.empty())
    {
        int curr = qu.front();
        cout << curr << " ";
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (not visited.count(neighbour))
            {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout << "\n";
}

int main()
{

    cin >> v;
    graph.resize(v, list<int>());
    int e;

    cin >> e;
    visited.clear();

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, 1);
    }
    vector<int> dist;
    bfs(0, dist);
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    return 0;
}