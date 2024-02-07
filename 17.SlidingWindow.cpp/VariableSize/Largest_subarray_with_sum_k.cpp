#include <bits/stdc++.h>
using namespace std;
int largest_subarray_of_sum_k(vector<int> &arr, int k) //  assumption : all elements are positive
{
    int maxi = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < arr.size())
    {
        sum += arr[j]; // calc
        if (sum < k)
            j++;
        else if (sum == k)
        {
            maxi = max(maxi, j - i + 1); // ans from calc
            j++;
        }
        else
        {
            while (sum > k) // removing elements from left till we get sum <= k
            {
                sum -= arr[i];
                i++;
            }
            j++;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr{4, 1, 1, 1, 2, 3, 5};
    int k = 5;
    cout << largest_subarray_of_sum_k(arr, k);
    return 0;
}