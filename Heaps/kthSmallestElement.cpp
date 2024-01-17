#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int &size, int currIdx)
{
    while (2 * currIdx + 1 < size)
    {
        int leftChildIdx = 2 * currIdx + 1;
        int rightChildIdx = 2 * currIdx + 2;
        int minChildIdx = leftChildIdx;
        if (rightChildIdx < size && arr[leftChildIdx] > arr[rightChildIdx])
        {
            minChildIdx = rightChildIdx;
        }
        if (arr[currIdx] <= arr[minChildIdx])
        {
            return;
        }
        swap(arr[currIdx], arr[minChildIdx]);
        currIdx = minChildIdx;
    }
}
void remove(int minHeap[], int &size)
{
    minHeap[0] = minHeap[size - 1];
    size--;
    heapify(minHeap, size, 0);
}
int kthSmallest(int arr[], int n, int k)
{

    // 1. Heapify all parent nodes into min Heap
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // 2. remove k-1 elements from heap
    k = k - 1;
    while (k--)
    {
        remove(arr, n);
    }
    // 3.root node will be the kth smallest element
    return arr[0];
}
int main()
{
    int arr[N] = {5, 20, 10, 30, 50, 6, 70};
    int n = 7;
    int k = 3;
    cout << kthSmallest(arr, n, k) << endl;
    return 0;
}