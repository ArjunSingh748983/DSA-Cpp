#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    cout << "a = " << a << " " << "b = " << b << endl;
    // swapping using xor operation ->
    a = a ^ b; // a = 5^7
    b = a ^ b; // b=5^7^7=5
    a = a ^ b; // a=5^7^5=7
    cout << "a = " << a << " " << "b = " << b << endl;
    return 0;
}