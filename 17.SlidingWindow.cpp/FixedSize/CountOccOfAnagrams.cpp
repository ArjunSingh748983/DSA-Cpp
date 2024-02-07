#include <bits/stdc++.h>
using namespace std;
int countAnagrams(string txt, string pat)
{
    unordered_map<char, int> mp;  // char,freq
    for (auto i : pat)  mp[i]++;

    int i, j, count, ans;
    i = j = ans = 0;
    count = mp.size();  // count -> number of distinct characters
    int k = pat.length(); // window size

    while (j < txt.size())
    {
        if (mp.find(txt[j]) != mp.end()) {
            mp[txt[j]]--; // a letter of pat consumed
        if (mp[txt[j]] == 0)  count--; // distinct letters in pat reduced by one
            }
        int curr_window_size = j - i + 1;

        if (curr_window_size < k) j++; // reach the window size k

        else if (curr_window_size == k){
            if(count==0) ans++;  // all letters of pat were consumed
            if(mp.find(txt[i])!=mp.end()) {
                mp[txt[i]]++;  // undo the changes of txt[i] before sliding the window
            if(mp[txt[i]]==1) count++;
            }
            i++;  // slide the window
            j++;
        }    
    }
    return ans;
}
int main()
{
    string txt = "aabaabaa";
    string pat = "aaba";
    cout << countAnagrams(txt, pat);
    return 0;
}