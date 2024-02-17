#include <bits/stdc++.h>
using namespace std;
void printSubsequences(int idx, vector<int> &ds, vector<int> arr, int n, set<vector<int>> &res)
{
    if (idx == n) //  t.c = n*O(n) and space : O (n)
    {
        res.insert(ds);
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    printSubsequences(idx + 1, ds, arr, n, res);
    // not pick the index into subsequence
    ds.pop_back();
    printSubsequences(idx + 1, ds, arr, n, res);
}
int main()
{
    vector<int> arr{3, 1, 2};
    int n = arr.size();
    vector<int> ds;
    
    return 0;
}