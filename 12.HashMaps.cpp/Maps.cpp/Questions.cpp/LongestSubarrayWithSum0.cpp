#include <bits/stdc++.h>
using namespace std;
int maxSubarrayLengthWithZeroSum(vector<int> &v) // O(n) both time and space
{
    unordered_map<int, int> m;
    int prefixSum = 0;
    int maxLen = 0;
    for (int i = 0; i < v.size(); i++) {
        prefixSum += v[i];
        if (prefixSum == 0) maxLen++;
        if (m.find(prefixSum) != m.end()) maxLen = max(maxLen, i - m[prefixSum]);
        else m[prefixSum] = i;
    }
    return maxLen;
}
int main()
{
    vector<int> arr{15, -2, 2, -8, 1, 7, 10, 23};
    cout << maxSubarrayLengthWithZeroSum(arr);
    return 0;
}