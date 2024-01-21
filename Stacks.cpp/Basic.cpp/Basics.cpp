#include <bits/stdc++.h>
using namespace std;
    int maxDepth(string &s) {
        stack<char> st;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                int stackSize=st.size();
                ans = max(ans, stackSize);
            } else
                st.pop();
        }
        return ans;
    }
int main() {
    string s="(d(2(4+-((4)))))";
    cout<<maxDepth(s);
    return 0;
}