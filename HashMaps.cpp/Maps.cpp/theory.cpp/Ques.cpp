#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert({1, 10});
    // m.insert(make_pair(1,20)); // no updation;
    // m.insert({1,20}); // no updation;
    m[1] = 20; // updation
    m.insert({3, 30});
    m[4] = 40;
    for (auto i : m)
    {
        cout << i.first << " - " << i.second << endl;
    }
    return 0;
}