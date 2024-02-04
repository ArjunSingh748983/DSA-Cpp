#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int n = 50;
    // 1st way -> O(msb)
    // while (n != 0) 
    // {
    //     if (n & 1 == 1)
    //         count++;
    //     n = n >> 1;
    // }

    // 2nd way -> O(set bits)
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count;
    return 0;
}