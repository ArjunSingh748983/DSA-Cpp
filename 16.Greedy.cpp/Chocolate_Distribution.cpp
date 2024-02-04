#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> choc{3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
    sort(choc.begin(), choc.end());
    int i = 0, j = m - 1;
    int mini = INT_MAX;
    while (j < choc.size())
    {
        int diff = choc[j] - choc[i];
        mini = min(mini, diff);
        i++, j++;
    }
    cout << mini;

    return 0;
}