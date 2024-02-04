#include <bits/stdc++.h>
using namespace std;
// USe sliding window when you need to find longest/shortest sequence with some given conditions.
int maxStringWithConsecutiveOnes(string str, int k)
{
    int s = 0;
    int e = 0;
    int zeroes = 0;
    int MaxStringLength = 0;
    while (s < str.size() and e < str.size())
    {
        while (zeroes > k)
        {
            s++;
            zeroes--;
        }
        e++;
        if (str[e] == '0')
            zeroes++;
        MaxStringLength++;
    }
    return MaxStringLength;
}
int main()
{
    string s = "0001101011";
    int k = 2;
    cout << maxStringWithConsecutiveOnes(s, k);
    return 0;
}