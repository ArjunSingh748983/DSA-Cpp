#include <bits/stdc++.h>
using namespace std; // lets do it using count sort;
string countSort(string s) {
    vector<int>freq(26,0);
    for (int i = 0; i < s.size(); i++) freq[s[i] - 'a']++; // Time Complexity = O(N) and Space Complexity : O(1)
    int j=0;
    for(int i=0;i<26;i++)
        while(freq[i]--) s[j++]=i+'a';
    return s;   
}
int main()
{
    string s = "dacbfe";
    cout<<countSort(s);
    return 0;
}