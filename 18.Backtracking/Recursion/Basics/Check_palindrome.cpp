#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int i = 0)
{
    if (i >= s.length() / 2) return true;
    bool res = s[i] == s[s.length() - i - 1];
    if (!res) return false;
    return isPalindrome(s, i + 1);
}
int main()
{
    string s = "abgsgba";
    cout << isPalindrome(s);
    return 0;
}