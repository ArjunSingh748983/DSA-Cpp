#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 128;
    if ((n & (n - 1)) == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}