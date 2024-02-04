#include <bits/stdc++.h>
using namespace std;
int FindMinimumSortedRotated(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = INT_MAX;
    int idx = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[mid]) // if left half is sorted
        {                             
            ans = min(ans, arr[low]); 
            if (ans == arr[low]) idx = low; 
            low = mid + 1;  // eliminate the left half after taking its minimum value
        }
        else
        {                             
            ans = min(ans, arr[mid]); // if right half is sorted
            if (ans = arr[mid]) idx = mid;   // only update idx if ans is updated  
            high = mid - 1;  // eliminate the right half after taking its minimum value
        }
    }
    return idx; // if you return ans, you will get the minimum value
}
int main()
{
    vector<int> arr{5, 6, 7, 8, 9, 1, 2, 3, 4};
    cout << FindMinimumSortedRotated(arr);
    return 0;
}