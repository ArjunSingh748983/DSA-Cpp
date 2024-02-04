#include <bits/stdc++.h>
using namespace std; // Sorting based on the ones,tens,hunders digits and so on......
void countSort(vector<int> &arr, int pos)
{

    int n = arr.size();
    vector<int> freq(10, 0); /*****/
    for (int i = 0; i < n; i++)
    {
        freq[(arr[i] / pos) % 10]++; /*****/
    }
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[(arr[i] / pos) % 10]] = arr[i]; /*****/
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
void radixSort(vector<int> &arr) // sorts the array digit by digit starting from ones,tens etc till maximum elements's most significant digit
{
    int maxEle = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        maxEle = max(arr[i], maxEle);
    }
    for (int pos = 1; maxEle / pos > 0; pos *= 10)
    {
        countSort(arr, pos);
    }
}
int main()
{
    vector<int> arr{230, 456, 43, 2, 4567, 345, 23, 2, 44, 2, 1, 0};
    radixSort(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}