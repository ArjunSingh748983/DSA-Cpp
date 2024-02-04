#include <iostream>
#include <vector>
using namespace std;
string RemoveChar(string s, int idx, int n)
{
    if (idx == n)
        return "";
    string curr = "";
    curr += s[idx];
    if (s[idx] == 'a')
        return "" + RemoveChar(s, idx + 1, n);
    else
        return curr + RemoveChar(s, idx + 1, n);
}

int main()
{
    string s = "abcacax";
    int n = 8;
    cout << RemoveChar(s, 0, n);

    return 0;
}