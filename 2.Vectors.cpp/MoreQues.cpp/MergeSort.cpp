#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // cout << "Enter the size of first array : ";
    // int m;
    // cin >> m;
    // int arr[m];
    // cout << "Enter the 1st array elements : ";
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Enter the size of second array : ";
    // int n;
    // cin >> n;
    // int brr[n];
    // cout << "Enter the 2nd array elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int m=4;
    int n=6;
    int arr[m]={0,1,2,3};
    int brr[n]={-1,0,1,2,9,9};
    int crr[m + n];
    int aPtr = 0;
    int bPtr = 0;
    int i = 0;
    while (aPtr < m and bPtr < n)
    {

        if (arr[aPtr] < brr[bPtr])
        {
            crr[i] = arr[aPtr];
            aPtr++;
        }
        else
        {
            crr[i] = brr[bPtr];
            bPtr++;
        }
        i++;
    }
    while(aPtr<m){    // brr[] is exhausted
        crr[i]=arr[aPtr];
        aPtr++;
        i++;
    }
    while(bPtr<n){  // arr[] is exhausted
        crr[i]=brr[bPtr];
        bPtr++;
        i++;
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << crr[i] << " ";
    }

    return 0;
}