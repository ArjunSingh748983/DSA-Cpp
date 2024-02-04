#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int>freq(26,0);
    int n=s1.size();
    for(int i=0;i<n;i++) {
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++) if(freq[i]!=0) return false;
    return true;
}
int main() {
    string s1="abcdefgh";
    string s2="bcdefagh";
    cout<<boolalpha<<isAnagram(s1,s2);
    return 0;
}