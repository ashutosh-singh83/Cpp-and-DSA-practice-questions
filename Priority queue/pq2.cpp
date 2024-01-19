// kth largest element in array
#include <iostream>
#include <queue>
using namespace std;
int kthSmallestEle(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq; // min Heap
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop(); // deletes smallest element
        }
    }
    return pq.top(); // kth smallest element
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ele = kthSmallestEle(arr, n, k);
    cout << ele << endl;
    return 0;
}