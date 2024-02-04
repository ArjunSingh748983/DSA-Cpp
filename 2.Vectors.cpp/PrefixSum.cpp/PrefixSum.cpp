#include <iostream>
#include <vector>
using namespace std;

// eg: [5,4,1,2,3] -> [5,9,10,12,15]

void RunningSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

int main()
{
    cout << "Enter the size of the array : ";
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    RunningSum(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}