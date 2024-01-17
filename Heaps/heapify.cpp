#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int size, int currIdx)
{
    while (2 * currIdx <= size)
    {
        int leftChildIdx = 2 * currIdx;
        int rightChildIdx = 2 * currIdx + 1;
        int minChildIdx = leftChildIdx;
        if (rightChildIdx <= size && arr[leftChildIdx] > arr[rightChildIdx])
        {
            minChildIdx = rightChildIdx;
        }
        if (arr[currIdx] < arr[minChildIdx])
        {
            return;
        }
        swap(arr[currIdx], arr[minChildIdx]);
        currIdx = minChildIdx;
    }
}
int main()
{
    int arr[N] = {-1, 60, 10, 80, 50, 5, 20, 70};
    int size = 7;
    for (int i = size / 2; i > 0; i--)
    {
        // i->parent node
        heapify(arr, size, i);
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}