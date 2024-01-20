#include <bits/stdc++.h>
using namespace std;
void insertAtIndex(stack<int> &st, int idx, int val)
{
    int NoOfPops = st.size() - idx;
    stack<int> temp;
    while (NoOfPops)
    {
        temp.push(st.top());
        st.pop();
        NoOfPops--;
    }
    st.push(val);
    while (not temp.empty())
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
    insertAtIndex(st, 3, val);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}