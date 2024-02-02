#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 50;
    int i = 4;
    int mask = ~(1 << i);
    int ans = mask & n;
    cout << ans;
    return 0;
}