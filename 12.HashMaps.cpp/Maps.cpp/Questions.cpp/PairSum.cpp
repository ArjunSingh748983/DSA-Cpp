#include <bits/stdc++.h>
using namespace std;
vector<int> targetSumPair(vector<int> &v, int targetsum)
{
    unordered_map<int, int> mp; // element,index 
    vector<int> ans(2, -1);
    for (int i = 0; i < v.size(); i++)
    {
        if (mp.find(targetsum - v[i]) != mp.end())
        {
            ans[0] = mp[targetsum - v[i]];
            ans[1] = i;
            return ans;
        }
        else
        {
            mp[v[i]] = i;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 4, 5, 11, 13, 10, 2};
    int targetsum = 13;
    vector<int> ans = targetSumPair(arr, targetsum);
    cout << ans[0] << " " << ans[1];
    return 0;
}