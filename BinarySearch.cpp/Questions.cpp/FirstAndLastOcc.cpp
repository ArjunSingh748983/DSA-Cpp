#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target, vector<int> &ans)
{
    int low = 0;                                            // Binary Search used twice
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)                          // leftmost target index
        {
            ans[0] = mid;
            high = mid - 1;
        }
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    low = 0;
    high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)                      // rightmost target index
        { 
            ans[1] = mid;
            low = mid + 1;
        }
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 3, 3, 4, 5};
    int target = 3;
    vector<int> ans(2, -1);
    searchRange(arr, target, ans);
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}