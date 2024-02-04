#include <bits/stdc++.h>
using namespace std;
int PeakElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1) // if the array has only one element
        return arr[0];
    else if (arr[0] > arr[1]) // if first element is the peak
        return arr[0];
    else if (arr[n - 1] > arr[n - 2]) // if last element is the peak
        return arr[n - 1];
    int low = 1; // trim down the search space by eliminating firt and last indices
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]) // if arr[mid] is the peak element
            return arr[mid];
        else if (arr[mid] > arr[mid - 1]) // mid is on increasing curve thereby the peak will be on the right
        {
            low = mid + 1;
        }
        else // mid is on the decreasing curve thereby peak will be on the left
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 3, 2, 0, 1, 2, 3, 4, 6, 5, 4, 2}; // peak element=6 // if multiple peak elements then return any of the peak element
    cout << PeakElement(arr);
    return 0;
}