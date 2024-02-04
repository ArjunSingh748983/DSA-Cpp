#include <bits/stdc++.h>
using namespace std;
int FindMinimumSortedRotated(vector<int> &input)
{
    int low = 0; // 345612
    int high = input.size() - 1;
    if (input[low] <= input[high])
        return low; // already sorted
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (input[mid] > input[mid + 1])
            return mid + 1;
        if (input[mid] < input[mid - 1])
            return mid;
        if (input[mid] > input[low])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr {3, 4, 5, 6, 1, 2};
    cout << FindMinimumSortedRotated(arr);
    return 0;
} 