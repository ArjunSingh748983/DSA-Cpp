#include <iostream>
#include <vector>
using namespace std;
bool IsPresent(int *a, int i, int n, int target)
{
    if (i == n)
        return false;
    return ((a[i] == target) or IsPresent(a, i + 1, n, target));
}
int main()
{
    int arr[] = {2, 1, 3, 4, 0};
    int target;
    cin >> target;
    if (IsPresent(arr, 0, 5, target))
        cout << "It is Present!";
    else
        cout << "Not Present";
    return 0;
}