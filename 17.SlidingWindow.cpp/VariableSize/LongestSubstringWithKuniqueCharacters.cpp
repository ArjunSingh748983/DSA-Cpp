#include <bits/stdc++.h>
using namespace std;
int longest_substring_with_k_unique_char(string s,int k){
    int ans=0;
    unordered_map<char,int>mp;
    int i=0;int j=0;
    while(j<s.size()){
        mp[s[j]]++;

        if(mp.size()<k) j++;

        else if(mp.size()==k){
            ans=max(ans,j-i+1);
            j++;
        }
        
        else{
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    return ans;
}
int main() {
    string s="aabacbebebe";
    int k=3;
    cout<<longest_substring_with_k_unique_char(s,k);
    return 0;
}