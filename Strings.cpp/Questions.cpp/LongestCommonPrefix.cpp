#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &str) // T.C = O(nlogn * m) (+ ignore : O (min(s[0].size(),s[1].size()))
{
    if (str.empty())
        return "";
    sort(str.begin(), str.end());
    string s1 = str[0];
    string s2 = str[str.size() - 1];
    int i = 0, j = 0;
    string ans = "";
    while (i < s1.size() and j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            ans += s1[i];
        }
        i++;
        j++;
    }
    return ans;
}
int main()
{
    vector<string> str{"airplane", "airforce", "airchief"};
    cout << longestCommonPrefix(str);
    return 0;
}