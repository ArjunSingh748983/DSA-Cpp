#include <bits/stdc++.h>
using namespace std;
class job
{
public:
    int id;
    int deadline;
    int profit;
};
bool comp(job a, job b)
{
    return (a.profit > b.profit);
}
pair<int, int> jobScheduling(job arr[], int n)
{
    sort(arr, arr + n, comp);
    int maxi = arr[0].deadline;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i].deadline);
    }
    int slot[maxi + 1];
    for (int i = 0; i <= maxi; i++)
    {
        slot[i] = -1;
    }
    int countJobs = 0;
    int jobProfit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].deadline; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = i;
                countJobs++;
                jobProfit += arr[i].profit;
                break;
            }
        }
    }
    return make_pair(countJobs, jobProfit);
}
int main()
{ // O(nlogn)+O(n*m)
    job j[8];
    j[0].id = 8, j[0].deadline = 2, j[0].profit = 22;
    j[1].id = 1, j[1].deadline = 4, j[1].profit = 20;
    j[2].id = 2, j[2].deadline = 5, j[2].profit = 60;
    j[3].id = 4, j[3].deadline = 6, j[3].profit = 65;
    j[4].id = 3, j[4].deadline = 6, j[4].profit = 70;
    j[5].id = 6, j[5].deadline = 2, j[5].profit = 80;
    j[6].id = 5, j[6].deadline = 4, j[6].profit = 25;
    j[7].id = 7, j[7].deadline = 2, j[7].profit = 10;
    pair<int, int> p = jobScheduling(j, 8);
    cout << "Maximum Jobs : " << p.first << endl <<"Maximum profit : " << p.second;
    return 0;
}