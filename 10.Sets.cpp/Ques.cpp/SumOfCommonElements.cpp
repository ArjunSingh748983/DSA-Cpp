#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{1, 1, 2, 3, 3, 3};       // n elements
    vector<int> v2{5, 6, 7, 5, 2, 3, 3, 6}; // m elements
    // Find sum of common elements in v1 and v2
    // i.e. -> 2+3=5;
    // time complexity :  O( (n+m)log(t) ) where t is number of unique elemnts in v1.
    set<int> s1;
    set<int> s2;
    int sum = 0;
    for (auto ele : v1)
    {
        s1.insert(ele);
    }
    for (auto ele : v2)
    {
        if (s1.find(ele) != s1.end())
        {
            sum += ele;
        }
    }
    cout << sum;
    return 0;
}