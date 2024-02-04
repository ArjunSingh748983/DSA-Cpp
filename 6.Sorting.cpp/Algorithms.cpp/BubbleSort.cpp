#include <iostream>
#include <vector>
using namespace std;               // Stable Sort
void BubbleSort(vector<int> &arr)  // Time Complexity : O(N*N)
{   int n=arr.size();                                // Space Complexity : O(1)
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
            if (flag == false) // If no swaps in a pass then array has been sorted
            {
                break;
            }
        }
    }
}
int main() // Bubble Sort : repeatedly swap adjacent elements until the array is sorted
{
    int n;
    cout << "Enter thr size of the array :\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    BubbleSort(v);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}