#include <bits/stdc++.h>
using namespace std;
void memoization(string text1, string text2, int i, int j) {
    if (i == 0 or j == 0) return; 
    if (text1[i - 1] == text2[j - 1])
        cout<<text1[i-1];
        memoization(text1, text2, i - 1, j - 1); // if matches, move both backward
        memoization(text1, text2, i - 1, j);
        memoization(text1, text2, i, j - 1);
}

int main() {
    string text1 = "abcd";
    string text2 = "abde";
    int m = text1.size();
    int n = text2.size();
    memoization(text1, text2, m, n);
    return 0;
}