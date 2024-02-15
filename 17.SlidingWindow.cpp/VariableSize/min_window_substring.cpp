#include <iostream>
#include <unordered_map>
#include <limits.h>
using namespace std;
// leetcode 76
class Solution {
public:
    string minWindow(string s, string t) {
        int ans = INT_MAX;
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        int start = 0;
        
        for (auto ch : t) {
            mp[ch]++;
        }
        
        int count = mp.size();
        
        while (j < s.size()) {
            if (mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;

                if (mp[s[j]] == 0)
                    count--;
            }
            
            while (count == 0) {
                if (mp.find(s[i]) != mp.end()) {
                    mp[s[i]]++;
                    
                    if (mp[s[i]] > 0) {
                        count++; // Increment count for characters that belong to t
                        int window_size = j - i + 1;
                        if (window_size < ans) {
                            ans = window_size;
                            start = i;
                        }
                    }
                }
                i++;
            }
            j++;
        }
        
        if (ans == INT_MAX)
            return "";
        
        return s.substr(start, ans);
    }
};

int main() {
    Solution solution;
    string s = "cabwefgewcwaefgcf";
    string t = "cae";
    cout << solution.minWindow(s, t) << endl;
    return 0;
}