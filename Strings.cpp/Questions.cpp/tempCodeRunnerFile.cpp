#include <bits/stdc++.h>
using namespace std; // lets do it using count sort;
void countSort(string s){
    vector<char>freq(26);
    for(int i=0;i<26;i++){
        freq[s[i]-'a']++;
    }
    for(int i=1;i<26;i++){
        freq[i]+=freq[i-1];
    }
    vector<char>ans(s.size());
    for(int i=0;i<s.size();i++){
        ans[--freq[s[i]]]=s[i]+'a';
    }
    for(int i=0;i<s.size();i++){
        s[i]=ans[i];
    }
}
int main() {
    string s="dacbfe";
    countSort(s);
    cout<<s;
    return 0;
}