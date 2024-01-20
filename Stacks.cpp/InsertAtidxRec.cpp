#include <bits/stdc++.h>
using namespace std;
void insertAtIndex(stack<int> &st, int idx, int val) // assume this func removes the element at idx index
{
    if (!idx or st.empty())
    {
        st.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insertAtIndex(st, idx-1, val);
    st.push(curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int val = 6;
    insertAtIndex(st, 3, val);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}