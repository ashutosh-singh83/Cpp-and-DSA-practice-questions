// array implementation of queue
#include <iostream>
using namespace std;
#define n 20
class queue
{

    int *arr;
    int front;
    int back;
    int cs;
    int ts;

public:
    queue(int size)
    {
        arr = new int[size];
        front = 0;
        back = size - 1;
        cs = 0;
        ts = size;
    }
    void push(int x)
    {
        if (isFull())
            return;
        back = (back + 1) % ts;
        arr[back] = x;
        cs++;
    }
    void pop()
    {
        if (isEmpty())
            return;
        front = (front + 1) % ts;
        cs--;
    }
    int getFront()
    {
        if (front == -1)
            return -1;
        return arr[front];
    }
    bool isEmpty()
    {
        return cs == 0;
    }
    bool isFull()
    {
        return cs == ts;
    }
};
int main()
{
    queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();
    q.push(4);

    q.pop();

    q.pop();

    q.pop();
    q.push(100);
    cout << q.getFront() << " ";
    q.pop();
    q.push(200);
    cout << q.getFront() << " ";

    cout << q.isEmpty() << endl;
}