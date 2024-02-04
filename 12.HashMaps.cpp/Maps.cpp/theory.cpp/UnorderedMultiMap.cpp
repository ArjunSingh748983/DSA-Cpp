#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<string, int> fruits;
    fruits.insert(make_pair("apple", 5));
    fruits.insert(make_pair("banana", 7));
    fruits.insert(make_pair("apple", 9));
    for (auto pair : fruits)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}