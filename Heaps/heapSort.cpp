#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int &size, int currIdx)
{
    while (2 * currIdx <= size)
    {
        int leftChildIdx = 2 * currIdx;
        int rightChildIdx = 2 * currIdx + 1;
        int maxChildIdx = leftChildIdx;
        if (rightChildIdx <= size && arr[leftChildIdx] < arr[rightChildIdx])
        {
            maxChildIdx = rightChildIdx;
        }
        if (arr[currIdx] > arr[maxChildIdx])
        {
            return;
        }
        swap(arr[currIdx], arr[maxChildIdx]);
        currIdx = maxChildIdx;
    }
}
void remove(int maxHeap[], int &size)
{
    swap(maxHeap[1], maxHeap[size]);
    size--;
    heapify(maxHeap, size, 1);
}
void heapSort(int arr[], int n)
{

    // 1. Heapify all parent nodes into max Heap
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // 2. Delete elements from max heap until size becomes 0
    while (n > 0)
    {
        remove(arr, n);
    }
}
int main()
{
    int arr[N] = {-1, 60, 10, 80, 50, 5, 90, 70};
    int n = 7;
    heapSort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}