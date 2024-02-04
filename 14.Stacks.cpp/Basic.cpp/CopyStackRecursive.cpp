#include <bits/stdc++.h>
using namespace std;
void copyStackRecursive(stack<int>&input,stack<int>&result){ // assume this func copies input to result
  if(input.empty()) return;
  int curr=input.top();
  input.pop();
  copyStackRecursive(input,result);
  result.push(curr);
}
int main() {
    stack<int> st;
    stack<int> res;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    copyStackRecursive(st,res);
    while (!res.empty())
    {
        cout << res.top() << endl;
        res.pop();
    }
    return 0;
}