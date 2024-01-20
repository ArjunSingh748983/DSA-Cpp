#include <bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &st)
{
    stack<int> t1, t2;
    while (!st.empty())
    {
        t1.push(st.top());
        st.pop();
    }
    while (!t1.empty())
    {
        t2.push(t1.top());
        t1.pop();
    }
    while (!t2.empty())
    {
        st.push(t2.top());
        t2.pop();
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
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}