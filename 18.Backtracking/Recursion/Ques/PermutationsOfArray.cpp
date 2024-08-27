#include <bits/stdc++.h>
using namespace std;
void Permutations(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, vector<bool> &freq)
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (!freq[i])
        {
            freq[i] = true;
            ds.push_back(arr[i]);
            Permutations(arr, ds, ans, freq);
            ds.pop_back();
            freq[i] = false;
        }
    }
}
int main()
{ // t.c -> O(n! x n) and space : O(n) + O(n)
    vector<int> arr{1, 2, 3};
    vector<int> ds;
    vector<vector<int>> ans;
    vector<bool> freq(arr.size(), false);
    Permutations(arr, ds, ans, freq);
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