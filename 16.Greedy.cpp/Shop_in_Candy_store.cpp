#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> candies{3, 2, 1, 4};
    int k = 2;
    int n = candies.size();
    sort(candies.begin(), candies.end());
    int mini = 0;
    int buy = 0;
    int free = n - 1;
    while (buy <= free)
    {
        mini = mini + candies[buy];
        buy++;
        free = free - k;
    }
    free = 0;
    buy = n - 1;
    int maxi = 0;
    while (free <= buy)
    {
        maxi = maxi + candies[buy];
        buy--;
        free = free + k;
    }
    cout << mini << " " << maxi;
    return 0;
}