#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n, int target, vector<vector<int>> &dp) { 

    if (!target) return 1;
    if (!n) return arr[0] == target;
    if (dp[n][target] != -1) return dp[n][target];
    int notTake = f(arr, n - 1, target, dp);
    int take = 0;
    if (target > arr[n]) {
        take = f(arr, n - 1, target - arr[n], dp);
    }
    return dp[n][target] = take + notTake;
}
int main(){
    vector<int> arr{1, 2,3}; //{3,4},{1,2,3,1},{4,1,2},{2,3,2}
    int n = arr.size();
    int target = 7;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
    cout<<f(arr, n - 1, target, dp);
    return 0;
}