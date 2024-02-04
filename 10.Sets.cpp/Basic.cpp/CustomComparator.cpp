#include <bits/stdc++.h>
using namespace std;
// comparator is just a func which return true/false
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}
int main()
{ // Sorting : Ascending order
    vector<int> arr1{2, 3, 1, 5, 4, 6, 7, 5, 8, 9, 2, 6, 3, 8, 1};
    sort(arr1.begin(), arr1.end());
    for (auto x : arr1)
        cout << x << " ";

    cout << endl;
    // Sorting : descending order
    vector<int> arr2{2, 3, 1, 5, 4, 6, 7, 5, 8, 9, 2, 6, 3, 8, 1};
    sort(arr2.begin(), arr2.end(), greater<int>());
    for (auto x : arr2)
        cout << x << " ";

    // Sorting in my way :
    // sort it according to second element
    // if second element is same , then sort it according to first element but in descending order.
    cout << endl;
    vector<pair<int, int>> p = {{1, 2}, {2, 1}, {4, 1}};
    sort(p.begin(), p.end(), comp);
    for (auto x : p)
        cout << x.first << " " << x.second << endl;
    return 0;
}