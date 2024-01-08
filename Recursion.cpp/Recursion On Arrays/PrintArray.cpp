#include <iostream>
#include <vector>
using namespace std;
void PrintElements(int *arr, int idx, int size)
{
    if (idx == size or size == 0)
        return;                        // Base Case
    cout << arr[idx] << " ";           // Self Work
    PrintElements(arr, idx + 1, size); // Assume it prints remaining elements
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    PrintElements(arr, 0, n);

    return 0;
}