#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct meeting
{
    int start;
    int end;
    int pos;
};
bool cmp(meeting m1, meeting m2)
{
    if (m1.end < m2.end)
        return true;
    else if (m1.end > m2.end)
        return false;
    else if (m1.pos < m2.pos)
        return true;
    return false;
}
vector<int> maxMeetings(int s[], int e[], int n)
{
    meeting meet[n];
    for (int i = 0; i < n; i++)
    {
        meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i + 1;
    }
    sort(meet, meet + n, cmp);
    vector<int> ans;
    ans.push_back(meet[0].pos);
    int finishTime = meet[0].end;
    for (int i = 1; i < n; i++)
    {
        if (meet[i].start > finishTime)
        {
            finishTime = meet[i].end;
            ans.push_back(meet[i].pos);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int start[n];
    for (int i = 0; i < n; i++)
    {
        cin >> start[i];
    }
    int end[n];
    for (int i = 0; i < n; i++)
    {
        cin >> end[i];
    }
    vector<int> meetingIndices = maxMeetings(start, end, n);
    for (int i = 0; i < meetingIndices.size(); i++)
    {
        cout << meetingIndices[i] << " ";
    }
    cout << endl;
    return 0;
}