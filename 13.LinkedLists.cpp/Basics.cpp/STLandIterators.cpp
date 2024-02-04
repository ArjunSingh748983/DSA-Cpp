#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4};
    // list<int>::iterator itr=l1.begin();
    auto itr = l1.begin();
    advance(itr, 2);
    l1.insert(itr, 6); // list.insert() inserts value before the iterator
    // list.insert(itr,count,value) inserts value before the iterator count no of times
    // list.insert(start,end,value) inserts value bw start and end iterator
    // l1.erase(itr);
    // l1.erase(start_itr,end_itr); // deletes range
    // push_front(val),push_back(val),pop_front(),pop_back()
    cout << *itr;
    return 0;
}