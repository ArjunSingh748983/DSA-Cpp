#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int> &input, int target)
{
    int low = 0;
    int high = input.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (input[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (target > input[mid])
            low = mid + 1;
        else  
            high = mid - 1;
    }
    return ans;
}
int main()
{   
    vector<int> arr{2,2};
    int target = 2;
    cout << firstOccurrence(arr, target);
    return 0;
}