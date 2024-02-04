#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &str) // T.C.= O(n*m) and Space : O(1)
{
    string s1 = str[0];
    int ansLength = s1.size();
    for (int i = 1; i < str.size(); i++)
    {
        int j = 0;
        while (j < s1.size() and j < str[i].size() and s1[j] == str[i][j]) // finding the number of common letters bw s1 and str[i][j]
        {
            j++;
        }
        ansLength = min(ansLength, j);
    }
    string ans = s1.substr(0, ansLength);
    return ans;
}
int main()
{
    vector<string> str{"airplane", "airforce", "airchief"};
    cout << longestCommonPrefix(str);
    return 0;
    return 0;
}