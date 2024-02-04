#include <bits/stdc++.h>
using namespace std;
void removeFromBottom(stack<int> &st, int idx) // assume this func removes the element at bottom
{
    if (!idx and !st.empty())
    {
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    removeFromBottom(st, idx - 1);
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
    removeFromBottom(st, 3);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}