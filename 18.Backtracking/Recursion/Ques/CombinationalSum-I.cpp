#include <bits/stdc++.h>
using namespace std; // leetcode 39
void findComb(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int i, int target)
{
    if (i == arr.size())
    {
        if (target == 0)
            ans.push_back(ds);
        return;
    }
    if (arr[i] <= target)
    {
        ds.push_back(arr[i]);
        findComb(arr, ans, ds, i, target - arr[i]); // pick
        ds.pop_back(); // remove the last added element while bactracking
    }

    findComb(arr, ans, ds, i + 1, target); // not pick
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    findComb(candidates, ans, ds, 0, target);
    return ans;
}
int main()
{
    vector<int> candidates{2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(candidates, target);
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