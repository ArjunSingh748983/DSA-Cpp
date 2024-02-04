#include <iostream>
#include <vector>
using namespace std; // Unstable Sortf 
// Selection Sort : repeatedly find minimum element in unsorted part and place it at the beggining of the unsorted part
void SelectionSort(vector<int> &arr)
{
    int n = arr.size();
    // finding min element in unsorted array
    for (int i = 0; i < n - 1; i++) // In ith iteration we are selecting the ith minimum to be placed at the ith position
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i) // Placing min element at the beginning
            swap(arr[i], arr[minIdx]); // Swaps are O(N)
    }
}
int main()
{ // Time Complexity : O(N*N) & Space Complexity : O(1)
    int n;
    cout << "Enter thr size of the array :\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    SelectionSort(v);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}