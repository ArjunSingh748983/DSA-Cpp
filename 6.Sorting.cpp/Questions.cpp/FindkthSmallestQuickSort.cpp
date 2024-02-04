#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int l, int r) // worst case : O(n*n) and best case :O(n)
{
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i++], arr[j]);
        }
    }
    swap(arr[i], arr[r]);
    return i;
}
int kthSmallest(int arr[], int l, int r, int k)
{
    if (k > 0 and k <= r - l + 1)
    {
        int pos = Partition(arr, l, r); // pos of pivot element
        if (pos - l == k - 1)
        {
            return arr[pos];
        }
        else if (pos - 1 > k - 1)
        {
            return kthSmallest(arr, l, pos - 1, k);
        }
        else
            return kthSmallest(arr, pos + 1, r, k - (pos - l + 1));
    }
    return INT_MAX;
}
int main()
{
    int arr[] = {1, 4, 3, 5, 2, 6, 9, 8, 0, 7};
    int k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kthSmallest(arr, 0, n - 1, k);
    return 0;
}