#include <bits/stdc++.h>
using namespace std;
void permute(int index, vector<int> &nums, vector<vector<int> > &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        permute(index + 1, nums, ans);
        swap(nums[index], nums[i]); // return to the original state while backtracking
    }
}
int main()
{
    vector<int> nums{1, 2, 3}; // time complexity : O(n!xn)
    vector<vector<int> > ans;
    permute(0, nums, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}