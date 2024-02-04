#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// We have an Inbuilt function known as abs(int) for absolute values
void SortedSquaredArray(vector<int> &v)
{
    vector<int> ans;
    int leftPtr = 0;
    int rightPtr = v.size() - 1;
    while (leftPtr <= rightPtr)
    {
        if (abs(v[leftPtr]) < abs(v[rightPtr]))
        {
            ans.push_back(v[rightPtr] * v[rightPtr]);
            rightPtr--;
        }
        else
        {
            ans.push_back(v[leftPtr] * v[leftPtr]);
            leftPtr++;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    cout << "Enter the size of the array : ";
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    SortedSquaredArray(arr);

    return 0;
}