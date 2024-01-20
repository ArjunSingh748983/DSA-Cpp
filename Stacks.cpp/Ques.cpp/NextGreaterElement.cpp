#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>&arr){
    stack<int>st;
    vector<int>ans;
    st.push(0);
    for(int i=0;i<arr.size();i++){
        while(arr[i]>arr[st.top()]){
           ans[st.top()]==arr[i];
        }
        st.push(i);
    }
    return ans;
}
int main() {
    
    return 0;
}