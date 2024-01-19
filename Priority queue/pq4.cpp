// find two smallest element and push their multiplication into array k times and then return max element
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int largestPoint(vector<int> arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq; // min Heap
    for (int i : arr)
    {
        pq.push(i);
    }
    while (k--)
    {
        int firstMin = pq.top();
        pq.pop();
        int secondMin = pq.top();
        pq.pop();
        pq.push(firstMin * secondMin);
    }
    // delete heap elements until size becomes 1
    while (pq.size() > 1)
    {
        pq.pop();
    }
    return pq.top();
}
int main()
{
    vector<int> arr = {2, 4, 3, 1, 5};
    int k = 6;
    int ans = largestPoint(arr, k);
    cout << ans << endl;
    return 0;
}