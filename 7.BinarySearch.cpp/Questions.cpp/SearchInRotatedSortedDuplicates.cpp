#include <bits/stdc++.h>
using namespace std;

bool SearchInRotatedSorted(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // identify the sorted part
        if (target == arr[mid])
            return true;
        if (arr[low] == arr[mid] and arr[mid] == arr[high]) // ****shrink the search space and start again****
        { 
            low++;
            high--;
            continue;
        }
        if (arr[low] <= arr[mid]) // left half is sorted;
        {
            if (target >= arr[low] and target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else // right half is sorted
        {
            if (target >= arr[mid] and target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<int> arr{3, 3, 2, 3, 3, 3, 3};
    cout << boolalpha << SearchInRotatedSorted(arr, 3);
    return 0;
}