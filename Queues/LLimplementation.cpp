// LL implementation of queue
// space efficient
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
public:
    Node *head;
    Node *tail;
    queue()
    {
        head = NULL;
        tail = NULL;
    }
    void push(int x)
    {
        Node *n = new Node(x);
        if (head == NULL)
        {
            tail = n;
            head = n;
            return;
        }
        tail->next = n;
        tail = n;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        Node *toDelete = head;
        head = head->next;
        delete (toDelete);
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return head->data;
    }
    bool isEmpty()
    {
        if (head == NULL)
        {
            cout << "No elements in queue" << endl;
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.isEmpty() << endl;
}