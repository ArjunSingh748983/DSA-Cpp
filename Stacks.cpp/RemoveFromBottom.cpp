#include <bits/stdc++.h>
using namespace std;
void removeFromBottom(stack<int> &st) // assume this func removes the element at bottom
{
    if (st.size()==1)
    {
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    removeFromBottom(st);
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
    removeFromBottom(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}