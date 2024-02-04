#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "i like this program very much";
    string ans = "";
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            reverse(temp.begin(), temp.end());
            ans = ans + temp + ' ';
            temp = "";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    reverse(temp.begin(), temp.end()); // for reversing the first word
    ans = ans + temp;
    cout << ans;
    return 0;
}