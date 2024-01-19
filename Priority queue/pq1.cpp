#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq1;
    pq1.push(1);
    pq1.push(2);
    pq1.push(10);
    pq1.push(7);
    cout << "Max Heap" << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(10);
    pq2.push(7);
    cout << "Min Heap" << endl;
    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
}