#include <iostream>
using namespace std;
int const N = 1e3;
void deleteMinHeap(int minHeap[], int &size)
{
    minHeap[1] = minHeap[size];
    size--;
    int currIdx = 1;

    while (2 * currIdx <= size) // looping till curr Node has child nodes
    {
        int leftChildIdx = 2 * currIdx;
        int rightChildIdx = 2 * currIdx + 1;
        int minChildIdx = leftChildIdx;
        if (rightChildIdx <= size && minHeap[leftChildIdx] > minHeap[rightChildIdx])
        {
            minChildIdx = rightChildIdx;
        }
        if (minHeap[currIdx] < minHeap[minChildIdx])
        {
            return;
        }
        swap(minHeap[currIdx], minHeap[minChildIdx]);
        currIdx = minChildIdx;
    }
}
int main()
{
    int minHeap[N] = {-1, 10, 20, 30, 40, 50};
    int size = 5;

    deleteMinHeap(minHeap, size);
    for (int i = 1; i <= size; i++)
    {
        cout << minHeap[i] << " ";
    }
    return 0;
}