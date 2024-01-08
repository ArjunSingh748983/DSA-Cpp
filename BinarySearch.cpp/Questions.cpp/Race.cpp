#include <bits/stdc++.h>
using namespace std;
bool CanPlaceStudents(vector<int> &pos, int s, int mid)
{
    int studentsReqd = 1;
    int lastPlaced = pos[0];
    for (int i = 1; i < pos.size(); i++)
    {
        if (pos[i] - lastPlaced >= mid)
        {
            studentsReqd++;
            lastPlaced = pos[i];
            if (studentsReqd == s)
            {
                return true;
            }
        }
    }
    return false;
}
int race(vector<int> &pos, int s)
{ // T.S=O(n*(xn-x))
    int low = 1;
    int n = pos.size();
    int high = pos[n - 1] - pos[0];
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (CanPlaceStudents(pos, s, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    int s = 3;
    vector<int> pos{1, 2, 4, 8, 9};
    cout << race(pos, s);
    return 0;
}