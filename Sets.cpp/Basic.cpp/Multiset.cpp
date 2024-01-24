#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms1;
    ms1.insert(3);
    ms1.insert(1);
    ms1.insert(2);
    ms1.insert(3);
    for (auto ele : ms1)
    {
        cout << ele << " "; // 1 2 3 3
    }
    cout << endl;
    multiset<int, greater<int>> ms2;
    ms2.insert(3);
    ms2.insert(1);
    ms2.insert(2);
    ms2.insert(3);
    for (auto ele : ms2)
    {
        cout << ele << " "; // 3 3 2 1
    }
    return 0;
}