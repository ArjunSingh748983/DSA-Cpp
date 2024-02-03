#include <bits/stdc++.h>
using namespace std;

int main() // similar problem on codechef as pter and combinational lock
{
    vector<int> arr{3, 2, 4}; // time : O(n*(2^n))
    int n = arr.size();
    int totalSubsets = 1 << n;
    vector<vector<int>> ans(totalSubsets, vector<int>());
    for (int num = 0; num < totalSubsets; num++)
    {
        for (int bit = 0; bit < n; bit++)
        {
            if (num & (1 << bit))
                ans[num].push_back(arr[bit]);
        }
    }
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