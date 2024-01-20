#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insertAtBottom(st, val);
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
    insertAtBottom(st, val);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}