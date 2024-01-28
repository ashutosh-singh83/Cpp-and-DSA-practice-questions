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
vector<int> bfs(int src)
{
    queue<int> qu;
    unordered_set<int> visited;
    visited.insert(src);
    qu.push(src);
    vector<int> bfsArray;
    while (!qu.empty())
    {
        int curr = qu.front();
        bfsArray.push_back(curr);
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (not visited.count(neighbour))
            {
                qu.push(neighbour);
                visited.insert(neighbour);
            }
        }
    }
    return bfsArray;
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

    vector<int> bfsArray = bfs(0);
    for (int i = 0; i < bfsArray.size(); i++)
    {
        cout << bfsArray[i] << " ";
    }
    cout << endl;
    return 0;
}