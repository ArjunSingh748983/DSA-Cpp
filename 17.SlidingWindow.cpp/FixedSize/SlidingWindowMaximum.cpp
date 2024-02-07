#include <bits/stdc++.h>
using namespace std;
vector<int> slidingWindowMaximum(vector<int> &arr, int k)
{
    int i = 0, j = 0;
    vector<int> ans;
    deque<int> dq;
    while (j < arr.size())
    {
        int windowSize = j - i + 1;

        while (!dq.empty() and dq.back() < arr[j])
        {
            dq.pop_back();
        }
        dq.push_back(arr[j]);
        if (windowSize < k)
            j++;

        else if (windowSize == k)
        {
            ans.push_back(dq.front());
            if (!dq.empty() and dq.front() == arr[i])
            {
                dq.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = slidingWindowMaximum(arr, k);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}