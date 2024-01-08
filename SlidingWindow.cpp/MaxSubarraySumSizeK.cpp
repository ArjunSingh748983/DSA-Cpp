#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1, 3, 4, 5, 2, 6, 7};
    int start = 0;
    int end = 0;
    int k = 3;
    int sum = 0;
    int maxSum = INT_MIN;
    while (end < n)
    {
        int windowSize = end - start + 1; 
        sum += arr[end];
        if (windowSize < k)
            end++;
        else if (windowSize == k) // is point pe we need to do some calculations
        {
            maxSum = max(sum, maxSum);
            sum -= arr[start];
            start++;
            end++;
        }
    }
    cout << "Maximum sub array sum with size " << k << " is " << maxSum;
    return 0;
}