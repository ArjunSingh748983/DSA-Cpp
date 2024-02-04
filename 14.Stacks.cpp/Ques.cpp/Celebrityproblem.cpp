#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &M)
{
    stack<int> st;
    int n = M.size();
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }
    while (st.size() > 1)
    {
        int v1 = st.top();
        st.pop();
        int v2 = st.top();
        st.pop();
        if (M[v1][v2] == 0)
        {
            st.push(v1);
        }
        else if (M[v2][v1] == 0)
            st.push(v2);
    }
    if (st.size() == 0)
        return -1;
    int potential = st.top();
    st.pop();
    for (int j = 0; j < n; j++)
    {
        if (M[potential][j] == 1)
            return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == potential)
            continue;
        if (M[i][potential] == 0)
            return -1;
    }
    return potential;
}
int main()
{
    vector<vector<int>>v{{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout << celebrity(v);
    return 0;
}