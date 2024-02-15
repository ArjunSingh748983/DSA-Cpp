#include <bits/stdc++.h>
using namespace std;
/********************* V.V.I.M.P. PATTERN ************************/
// print only one subs with sum k -> use functional recursion when asked to generate only one out of many answers

int subseq_sum_k(vector<int> &arr, int i, int sum, int k, int n)
{
    if (i == n) {
        if (sum == k) return 1; // condition satisfied
        else return 0; // condition not satisfied
    }
    sum += arr[i];
    int l = subseq_sum_k(arr, i + 1, sum, k, n); // pick
    sum -= arr[i];
    int r = subseq_sum_k(arr, i + 1, sum, k, n); // not pick
    return l + r;
}
int main()
{
    vector<int> arr{1, 2, 3, -1, -2, 0, 1, 4};
    int n = arr.size();
    int k = 1;
    cout << subseq_sum_k(arr, 0, 0, k, n);
    return 0;
}