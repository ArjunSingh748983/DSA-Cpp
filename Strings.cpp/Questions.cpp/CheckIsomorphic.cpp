#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    for(int i=0;i<s1.size();i++){
        if(v1[s1[i]]!=v2[s2[i]]) return false; // It menas both the characters aren't mapped to each other
        v1[s1[i]]=v2[s2[i]]=i; // mapping the characters by unique values which we considered as the index of these characters
    }
return true;
}
int main() {
    string s1="egg";
    string s2="ada";
    cout<<boolalpha<<isIsomorphic(s1,s2);
    return 0;
}