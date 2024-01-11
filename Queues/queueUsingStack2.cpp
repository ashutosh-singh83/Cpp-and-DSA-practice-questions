// pop efficient
#include <iostream>
#include <stack>
using namespace std;
class Queue
{
    stack<int> st;

public:
    Queue() {}
    void push(int x)
    {
        // insertAtbottom
        if (st.empty())
        {
            st.push(x);
            return;
        }
        stack<int> temp;
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return;
    }
    void pop()
    {
        // deleteAtBottom
        if (st.empty())
            return;
        st.pop();
    }
    bool empty()
    {
        return st.empty();
    }
    int front()
    {
        if (st.empty())
            return -1;
        return st.top();
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.empty() << endl;
}