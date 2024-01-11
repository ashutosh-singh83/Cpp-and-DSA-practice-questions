// push efficient
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
        st.push(x);
    }
    void pop()
    {
        // deleteAtBottom
        if (st.empty())
            return;
        stack<int> temp;
        while (st.size() > 1)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return;
    }
    bool empty()
    {
        return st.empty();
    }
    int front()
    {
        if (st.empty())
            return -1;
        stack<int> temp;
        while (st.size() > 1)
        {
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return result;
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