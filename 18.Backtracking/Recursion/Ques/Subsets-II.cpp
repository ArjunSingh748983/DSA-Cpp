#include <bits/stdc++.h>
using namespace std; // leetcode 90
void uniqueSubsets(int index, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    for (int i = index; i < arr.size(); i++)
    {
        if (i != index and arr[i] == arr[i - 1]) continue;
        ds.push_back(arr[i]);
        uniqueSubsets(i + 1, ds, arr, ans);
        ds.pop_back(); // backtrack
    }
}
int main()
{ // time : O(n*(2^n)) and space : O((2^n)*k)
    vector<int> arr{1, 2, 2, 3};
    vector<int> ds;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    uniqueSubsets(0, ds, arr, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}