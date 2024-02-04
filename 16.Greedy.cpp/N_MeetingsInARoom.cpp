#include <bits/stdc++.h>
using namespace std;
// see problem statements on gfg/codeStudio
static bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int maxMeetings(vector<int> start, vector<int> end)
{
    vector<pair<int, int>> v;
    int n = start.size();
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = make_pair(start[i], end[i]);
        v.push_back(p);
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1;
    int ansEnd = v[0].second;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first > ansEnd)
        {
            cnt++;
            ansEnd = v[i].second;
        }
    }
    return cnt;
}
int main()
{
    vector<int> start{1, 3, 0, 5, 8, 5};
    vector<int> end{2, 4, 6, 7, 9, 9};
    cout << maxMeetings(start, end);
    return 0;
}