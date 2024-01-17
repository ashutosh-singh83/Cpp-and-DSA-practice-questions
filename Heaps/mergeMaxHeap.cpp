#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr, int size, int &curr)
{
    while ((2 * curr + 1) < size)
    {
        int leftChild = 2 * curr + 1;
        int rightChild = 2 * curr + 2;
        int maxChild = leftChild;
        if (rightChild < size && arr[leftChild] <= arr[rightChild])
        {
            maxChild = rightChild;
        }
        if (arr[curr] >= arr[maxChild])
        {
            return;
        }
        swap(arr[curr], arr[maxChild]);
        curr = maxChild;
    }
}
vector<int> mergeMaxHeaps(vector<int> &mh1, vector<int> &mh2, int &n1, int &n2)
{
    // push all elements into any heap

    vector<int> mergedHeap;
    for (auto ele : mh1)
    {
        mergedHeap.push_back(ele);
    }
    for (auto ele : mh2)
    {
        mergedHeap.push_back(ele);
    }
    // heapify
    for (int i = (n1 + n2) / 2 - 1; i >= 0; i--)
    {
        heapify(mergedHeap, n1 + n2, i);
    }
    return mergedHeap;
}
int main()
{
    vector<int> maxHeap1 = {90, 80, 70, 20, 10, 50, 60};
    vector<int> maxHeap2 = {60, 50, 40, 30, 20, 10, 5};
    int n1 = 7;
    int n2 = 7;
    vector<int> mergedHeap = mergeMaxHeaps(maxHeap1, maxHeap2, n1, n2);
    for (int i = 0; i < mergedHeap.size(); i++)
    {
        cout << mergedHeap[i] << " ";
    }
    cout << endl;
    return 0;
}