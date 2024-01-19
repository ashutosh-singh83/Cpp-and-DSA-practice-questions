// kth largest element in array
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int, int>> kClosestPoints(vector<pair<int, int>> pts, int n, int k)
{
    priority_queue<pair<int, pair<int, int>>> pq; // max Heap
    for (auto &ps : pts)
    {
        int distance = ps.first + ps.second;
        pq.push(make_pair(distance, ps));
        if (pq.size() > k)
        {
            pq.pop(); // deletes largest element
        }
    }
    vector<pair<int, int>> ans(k);
    while (!pq.empty())
    {
        ans[pq.size() - 1] = pq.top().second;
        pq.pop();
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> pts(n);
    for (auto &pt : pts)
    {
        cin >> pt.first >> pt.second;
    }
    vector<pair<int, int>> ansPts = kClosestPoints(pts, n, k);
    for (auto &pt : ansPts)
    {
        cout << pt.first << ' ' << pt.second;
        cout << endl;
    }
    return 0;
}