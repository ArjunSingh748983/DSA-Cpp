#include <bits/stdc++.h>
using namespace std;
int largestAreaHistogram(vector<int> &heights)
{ // next smaller and prev smaller concept based
    stack<int> st;
    int ans = 0;
    st.push(0);
    int n = heights.size();
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and heights[i] < heights[st.top()])
        {
            int bar = heights[st.top()];
            int nsi = i;
            st.pop();
            int psi = (st.empty()) ? -1 : st.top();
            ans = max(ans, bar * (nsi - psi - 1));
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int bar = heights[st.top()];
        int nsi = n;
        int psi = (st.empty()) ? -1 : st.top();
        ans = max(ans, bar * (nsi - psi - 1));
        st.pop();
    }
    return ans;
}
int main()
{
    vector<int> heights{2, 1, 5, 6, 2, 3, 0, 2, 1, 5, 6, 2, 3};
    int maxArea = largestAreaHistogram(heights);
    cout << maxArea;
    return 0;
}