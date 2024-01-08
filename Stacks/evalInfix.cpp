#include <iostream>
#include <math.h>
#include <stack>
using namespace std;
int calc(int v1, int v2, char op)
{
    if (op == '^')
        return pow(v1, v2);
    else if (op == '/')
        return v1 / v2;
    else if (op == '*')
        return v1 * v2;
    else if (op == '+')
        return v1 + v2;
    else
        return v1 - v2;
}
int checkPrecedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '/' or op == '*')
        return 2;
    else if (op == '+' or op == '-')
        return 1;
    else
        return -1;
}
int evalInfix(string &s)
{
    stack<int> nums;
    stack<char> ops;
    for (int i = 0; i < s.size() - 1; i++)
    {

        if (isdigit(s[i]))
        {
            nums.push(s[i] - '0');
        }
        else if (s[i] == '(')
        {
            ops.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!(ops.empty()) and ops.top() != '(')
            {
                char opr = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, opr));
            }
            if (not(ops.empty()))
                ops.pop();
        }
        else
        {
            while (not ops.empty() and checkPrecedence(ops.top()) >= checkPrecedence(s[i]))
            {
                char opr = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, opr));
            }
            ops.push(s[i]);
        }
    }
    while (!(ops.empty()))
    {
        char opr = ops.top();
        ops.pop();
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(calc(v1, v2, opr));
    }
    return nums.top();
}
int main()
{
    string str = "1+(2*(3-1))+2";
    int ans = evalInfix(str);
    cout << ans;
    return 0;
}
