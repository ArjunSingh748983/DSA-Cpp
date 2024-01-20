#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int val) // T.C.= O(n*n) and space = O(n)
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
void reverse(stack<int> &st)
{
    if (st.empty())
        return;
    int curr = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}