#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isAnagram(string &t1,string &t2) { // T.C. O(n) -> where n is the total no of characters and S>C=O(m) where m is the total no of unique characters
    unordered_map<char, int> mp; // char,frequency
    for (auto c : t1) mp[c]++;
    for (auto c : t2) mp[c]--;
    for(auto pair : mp) if(pair.second!=0) return false;
    return true;
}
int main() {
    string t1="hello";
    string t2="lleho";
    cout << (isAnagram(t1,t2) ? "Yes" : "No") << endl;
    return 0;
}