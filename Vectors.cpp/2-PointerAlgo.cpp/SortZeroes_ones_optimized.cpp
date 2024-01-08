#include <iostream>
#include <vector>
using namespace std;

void SortZeroesAndOnes(vector<int>&v, int n)
{
    int leftPtr = 0;
    int rightPtr = n - 1;
    while (leftPtr < rightPtr)
    {

        if (v[leftPtr] == 1 && v[rightPtr] == 0)
        {

            v[leftPtr] = 0;
            v[rightPtr] = 1;
            leftPtr++;
            rightPtr--;
        }
        if (v[leftPtr] == 0)
        {
            leftPtr++;
        }
        if (v[rightPtr] == 1)
        {
            rightPtr--;
        }
    }
}
int main()
{
    cout << "Enter the size of array : ";
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SortZeroesAndOnes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}