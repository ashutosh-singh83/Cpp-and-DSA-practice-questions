#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int> &qu)
{
    stack<int> st;
    while (not qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }
    while (not st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    return;
}
int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    reverseQueue(q1);
    while (not q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    return 0;
}