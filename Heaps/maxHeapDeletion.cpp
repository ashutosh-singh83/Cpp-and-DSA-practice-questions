#include <iostream>
using namespace std;
int const N = 1e3;
void deleteMaxHeap(int maxHeap[], int &size)
{
    maxHeap[1] = maxHeap[size];
    size--;
    int currIdx = 1;

    while (2 * currIdx <= size) // looping till curr Node has child nodes
    {
        int leftChildIdx = 2 * currIdx;
        int rightChildIdx = 2 * currIdx + 1;
        int maxChildIdx = leftChildIdx;
        if (rightChildIdx <= size && maxHeap[leftChildIdx] < maxHeap[rightChildIdx])
        {
            maxChildIdx = rightChildIdx;
        }
        if (maxHeap[currIdx] > maxHeap[maxChildIdx])
        {
            return;
        }
        swap(maxHeap[currIdx], maxHeap[maxChildIdx]);
        currIdx = maxChildIdx;
    }
}
int main()
{
    int maxHeap[N] = {-1, 90, 80, 70, 20, 10, 50, 60};
    int size = 7;

    deleteMaxHeap(maxHeap, size);
    for (int i = 1; i <= size; i++)
    {
        cout << maxHeap[i] << " ";
    }
    return 0;
}