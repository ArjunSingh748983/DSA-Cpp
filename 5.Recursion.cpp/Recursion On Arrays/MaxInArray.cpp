#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int SumElement(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    return arr[idx] + SumElement(arr, idx + 1, n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 6, 3, 1, 9};
    cout << SumElement(arr, 0, n);
    return 0;
}