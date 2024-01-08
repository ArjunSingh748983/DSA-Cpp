#include <bits/stdc++.h>
using namespace std;
int binarySearchRecursive(int *arr, int target, int low, int high)
{ // Time Complexity : O(logn) and Space Complexity : O(logn) due to stack filling
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2; // to prevent overflow when high and low values are very big numbers
    if (arr[mid] == target)
        return mid;
    if (target > arr[mid])
        return binarySearchRecursive(arr, target, mid + 1, high);
    else
        return binarySearchRecursive(arr, target, low, mid - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << binarySearchRecursive(arr, target, 0, n - 1);
    return 0;
}