#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    // find 1^2^3^4^5^6^7^8 in O(1) time complexity

    // brute force : O (n)
    // int XOR = 0;
    // while (n--) XOR ^= n;
    // cout << XOR;

    // Optimised : O(1)
    if (n % 4 == 0)
        cout << n;
    else if (n % 4 == 1)
        cout << 1;
    else if (n % 4 == 2)
        cout << n + 1;
    else if (n % 4 == 3)
        cout << 0;
    return 0;
}