#include <bits/stdc++.h>
using namespace std; // leetcode 40
void findComb(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds,
              int idx, int target)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx and arr[i] == arr[i - 1]) // i>idx is an imp condition
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[i]);
        findComb(arr, ans, ds, i + 1, target - arr[i]);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(candidates.begin(), candidates.end());
    findComb(candidates, ans, ds, 0, target);
    return ans;
}
int main()
{
    vector<int> candidates{1, 1, 1, 2, 2};
    int target = 4;
    vector<vector<int>> ans = combinationSum2(candidates, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}