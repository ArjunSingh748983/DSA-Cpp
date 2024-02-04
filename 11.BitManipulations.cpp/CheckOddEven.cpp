#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 521; // last bit of any odd number is always set (i.e. 1)
    if (n & 1 == 1)
        cout << "Odd";
    else
        cout << "Even";
    return 0;
}