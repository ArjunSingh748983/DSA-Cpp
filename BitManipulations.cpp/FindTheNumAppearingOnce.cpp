#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 2, 1, 3};
    int XOR = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        XOR ^= arr[i]; // since a^a = 0 and a^0 = a and a^b = b^a
    }
    cout << XOR;
    return 0;
}