#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Bitmasking
    int n = 13;
    int i = 3;
    int mask = 1 << i;
    bool set = mask & n;
    if (!set)
        cout << i << "th bit is not set";
    else
        cout << i << "th bit is set";
    return 0;
}