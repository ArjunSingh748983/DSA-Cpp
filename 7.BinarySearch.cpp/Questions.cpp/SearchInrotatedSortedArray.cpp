#include <bits/stdc++.h>
using namespace std;
int SearchInRotatedSorted(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // identify the sorted part
        if (target == arr[mid])
            return mid;
        if (arr[low] <= arr[mid]) // left half is sorted;
        { 
            if (target >= arr[low] and target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else  // right half is sorted
        {
            if (target >= arr[mid] and target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7};
    cout<<SearchInRotatedSorted(arr, 4);
    return 0;
}