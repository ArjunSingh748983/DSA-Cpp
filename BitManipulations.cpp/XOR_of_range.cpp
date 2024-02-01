#include <bits/stdc++.h>
using namespace std;
int XOR_till(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    return 0;
}
int main()
{
    int l = 3;
    int r = 7;
    // print the ans -> 3^4^5^6^7
    int ans = XOR_till(r) ^ XOR_till(l - 1);
    cout << ans;
    return 0;
}