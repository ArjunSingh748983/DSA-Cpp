#include <bits/stdc++.h>
using namespace std;                                 // Quick sort is unstable sorting algorithm
int Partition(vector<int> &arr, int first, int last) // returns correct position of partition element(here the last element)
{
    int i = first - 1; // Worst case : O(n*n) // Best/Avg Case : O(nlogn) || space :O(n) due to maximum n recursive stacks in a stack frame
    int j = first;
    for (; j < last; j++)
    {
        if (arr[j] < arr[last]) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[last], arr[i + 1]);
    return i + 1;
}
int randomPivot(vector<int> &arr, int first, int last) // It decreases time complexity statistically
{
    int random = first + rand() % (last - first + 1); // generates a random pivot between first to last
    swap(arr[last], arr[random]); // swapped pivot from last to random
    return Partition(arr, first, last);
}
void quickSort(vector<int> &arr, int first, int last) // sorts the parts around which the array is partitioned
{
    if (first >= last)
        return;
    int n = arr.size();
    int pi = randomPivot(arr, first, last);
    quickSort(arr, first, pi - 1);
    quickSort(arr, pi + 1, last);
}
int main()
{
    vector<int> arr{5, 4, 6, 7, 3, 2, 9, 8, 1};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}