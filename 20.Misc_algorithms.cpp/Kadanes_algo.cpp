#include <bits/stdc++.h>
using namespace std;
vector<int> maxSumSubarray(vector<int> &arr)
{
    int sum = 0;
    int maxi = INT_MIN;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if (sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0){
            sum = 0;
            start = i + 1;
        }
    }
    for (int i = ansStart; i <= ansEnd; i++) ans.push_back(arr[i]);
    return ans;
}
int main()
{
    vector<int> arr{-2, -3, 4, -1, -2, 1, 5, -3};
    vector<int> ans = maxSumSubarray(arr);
    for (auto x : ans) cout << x << " ";
    return 0;
}