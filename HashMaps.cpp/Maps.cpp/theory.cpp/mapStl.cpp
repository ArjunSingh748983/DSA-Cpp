#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> directory;
    map<string, int, greater<string>> directory_decreasing; // for descending order

    // insertion
    directory["naman"] = 1992;
    directory["shukla"] = 1232;
    directory["jumman"] = 1436;

    // Printing :
    for (auto element : directory)
    {
        cout << "Name : " << element.first;                // key
        cout << "  Phone no : " << element.second << endl; // value
    }

    // Traversing using iterators ->
    map<string, int>::iterator itr1;
    for (auto itr11 = directory.begin(); itr1 != directory.end(); itr1++)
    {
        cout << itr1->first << " " << itr1->second << endl;
    }
    cout << endl;

    // Traversing in reverse order using iterators ->
    map<string, int>::reverse_iterator itr2;
    for (auto itr2 = directory.rbegin(); itr2 != directory.rend(); itr2++)
    {
        cout << itr2->first << " " << itr2->second << endl;
    }
    return 0;
}