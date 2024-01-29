#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> input{1, 1, 2, 1, 3, 3, 3};
    map<int, int> mp; // element,frequency
    for (int i = 0; i < input.size(); i++)
    {
        mp[input[i]]++;
    }
    int sum = 0;
    for (auto pair : mp)
    {
        if (pair.second > 1)
            sum += pair.first;
    }
    cout << "Sum of repetitive elements is : " << sum;
    return 0;
}