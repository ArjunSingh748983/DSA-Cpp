#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {3, -4, -3, 6, -9, 2, 3};
    int n = 7;
    int TotalSum = 0;
    for (int i = 0; i < n; i++)
    {
        TotalSum += arr[i];
    }
    bool flag = false;
    int PrefixSum = 0;
    int idx = 0;
    int element;
    int SuffixSum;
    for (int i = 0; i < n; i++)
    {

        PrefixSum += arr[i];
        SuffixSum = TotalSum - PrefixSum;
        if (PrefixSum == SuffixSum)
        {
            flag = true;
            element = arr[i];
            idx = i;
            break;
        }
    }
    if (flag == true)
        cout << "Yes, the Prefix before " << element << " and SuffixSum after " << element << " at index " << idx << " are equal";
    else
        cout << "No,the PrefixSum and SuffixSum aren't equal";

    return 0;
}