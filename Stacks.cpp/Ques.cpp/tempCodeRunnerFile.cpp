#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &arr)
{
    stack<int> st;
    vector<int> ans;
    st.push(0);
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] > arr[st.top()])
        {
            ans[st.top()] == arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> arr{4, 6, 3, 1, 0, 9, 5, 6, 7, 3, 2};
    vector<int> ans = nextGreaterElement(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}