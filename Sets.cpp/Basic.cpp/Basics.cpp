#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set1; // by default increasing order me values store hongi
    // set<int, greater<int>> set1; // now  values will be stored in decreasing order
    set<int> set2 = {1, 2, 3, 4, 5, 6}; // declaration with initialisation
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout << set1.size() << endl;
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    set1.insert(7);
    set1.insert(8);
    cout << set1.size() << endl; // size remains same as set doesn't store duplicate values , it stores only unique values
    set<int>::iterator itr;      // for any stl container iterator-> stl_containerName<data_type>::iterator iterator_name;
    // for (itr = set1.begin(); itr != set1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // Deleting :
    set1.erase(4);
    set1.erase(2);
    auto itr1 = set1.begin();
    auto start = set1.begin();
    start++;
    auto end = set1.begin();
    advance(end,2);
    set1.erase(start, end);
    advance(itr1, 3); // move iterator by 3 steps;
    set1.erase(itr1);

    // Using fro each loop :

    for (auto value : set1) // auto keyword automatically sets value ka  datatype to set1 ka datatype
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}