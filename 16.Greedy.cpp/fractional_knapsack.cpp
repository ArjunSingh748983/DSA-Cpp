#include <bits/stdc++.h>
using namespace std;
class item
{
public:
    int value;
    int weight;
};
bool comp(item a, item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
double fractionalKnapsack(int W, item arr[], int n)
{
    sort(arr, arr + n, comp);
    int currWeight = 0;
    double finalValue = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (currWeight + arr[i].weight <= W)
        {
            currWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = W - currWeight;
            finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
            break;
        }
    }
    return finalValue;
}
int main()
{
    item i1[3];
    i1[0].value = 60;
    i1[0].weight = 10;
    i1[1].value = 100;
    i1[1].weight = 20;
    i1[2].value = 120;
    i1[2].weight = 30;
    cout << fractionalKnapsack(50, i1, 3);
    return 0;
}