#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int val) // Time and space : O(n)
{
    stack<int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
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