#include <bits/stdc++.h>
using namespace std;
// The stock span problem involves finding the span of a stock's price on each day, defined as
// the maximum consecutive days where the price is less than or equal to the current day.
// Given an array of daily stock prices, the task is to compute the span for each day.
vector<int> getStockSpan(vector<int> &stocks) //similar to prev greater element in left
{
    int n = stocks.size();
    vector<int> ans(n, 0);
    stack<int> st;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() and (stocks[i] > stocks[st.top()]))
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> arr{100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = getStockSpan(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}