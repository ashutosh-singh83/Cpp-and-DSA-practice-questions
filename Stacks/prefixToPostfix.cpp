#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
string prefixToPostfix(string &s)
{
    reverse(s.begin(), s.end());
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            st.push(to_string(s[i] - '0'));
        }
        else
        {

            string v1 = st.top();

            st.pop();
            string v2 = st.top();
            st.pop();
            string newExp = v1 + v2 + s[i];
            st.push(newExp);
        }
    }
    return st.top();
}
int main()
{
    string s = "*+32-15";
    string ans = prefixToPostfix(s);
    cout << ans << endl;
    return 0;
}