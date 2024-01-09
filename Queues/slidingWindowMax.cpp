#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> slidingWindowMax(vector<int> &input, int k)
{
    deque<int> dq;
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        while (not dq.empty() && input[dq.back()] < input[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    result.push_back(input[dq.front()]);
    for (int i = k; i < input.size(); i++)
    {
        int curr = input[i];
        if (dq.front() == i - k)
            dq.pop_front();
        while (not dq.empty() && input[dq.back()] < input[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        result.push_back(input[dq.front()]);
    }
    return result;
}

int main()
{
    vector<int> input;
    input = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> maxi = slidingWindowMax(input, 3);
    for (int i = 0; i < maxi.size(); i++)
    {
        cout << maxi[i] << " ";
    }
    return 0;
}