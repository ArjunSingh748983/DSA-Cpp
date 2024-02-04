#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    vector<pair<int, int>> p3{{1, 2}, {3, 4}, {5, 6}};
    cout << p3[1].second;
    return 0;
}