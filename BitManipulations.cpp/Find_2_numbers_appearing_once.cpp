#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 2, 5, 3, 2, 3, 4, 7, 4}; // O(n)
    int XOR = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        XOR = XOR ^ arr[i];
    }
    int cnt = 0;
    while (XOR)
    { // checking last bit which is set
        if (XOR & 1)
            break;
        else
        {
            cnt++;
            XOR = XOR >> 1;
        }
    }
    int XOR1 = 0, XOR2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] & (1 << cnt)) // ith bit is set
            XOR1 = XOR1 ^ arr[i];
        else
            XOR2 = XOR2 ^ arr[i];
    }
    cout << XOR1 << " " << XOR2;
    return 0;
}