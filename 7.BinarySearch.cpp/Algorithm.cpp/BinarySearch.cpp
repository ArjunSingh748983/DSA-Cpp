#include <bits/stdc++.h>
using namespace std; // **************Agar kisi Question mein max of min ya min of max puche to binary search lg skta hai most probably*************
int binarySearch(vector<int> &input, int target) // Time Complexity : O(logn) and Space Complexity : O(1)
{
    int low = 0;
    int high = input.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2; // mid = low+(high-low)/2; -> to prevent overflow when high and low values are very big numbers
        if (target == input[mid])
        {
            return mid;
        }
        else if (target > input[mid]) // discard the left part
        {
            low = mid + 1;
        }
        else // discard the right part
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> input{1,2,3,4,5,6,7,8,9};
    int target=6;
    cout<<binarySearch(input,target);
    return 0;
}