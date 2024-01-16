#include <iostream>
using namespace std;
int const N = 1e3;
void insertMaxHeap(int maxHeap[], int &size, int value)
{
    size++;
    maxHeap[size] = value;
    int curr = size;
    while (curr / 2 > 0 && maxHeap[curr / 2] < maxHeap[curr])
    {
        swap(maxHeap[curr / 2], maxHeap[curr]);
        curr = curr / 2;
    }
}
int main()
{
    int maxHeap[N] = {-1, 60, 50, 40, 30, 20, 10, 5};
    int size = 7;
    int valueToInsert = 100;
    insertMaxHeap(maxHeap, size, valueToInsert);
    for (int i = 1; i <= size; i++)
    {
        cout << maxHeap[i] << " ";
    }
    return 0;
}