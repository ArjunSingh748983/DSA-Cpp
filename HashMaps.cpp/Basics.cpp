#include <iostream>
#include <vector>
#include <list>
#include <bits/stdc++.h>
using namespace std;
class Hashing
{
public:
    vector<list<int>> hashtable;
    int buckets;
    Hashing(int size)
    {
        this->buckets = size;
        this->hashtable.resize(size);
    }
    int hashvalue(int key)
    {
        return key % this->buckets; // division method
    }
    void addKey(int key)
    {
        int idx = this->hashvalue(key);
        this->hashtable[idx].push_back(key); // insert at the end of linked list
    }
    list<int>::iterator searchKey(int key)
    {
        int idx = this->hashvalue(key);
        return find(this->hashtable[idx].begin(), this->hashtable[idx].end(), key);
    }
    void deleteKey(int key)
    {
        int idx = this->hashvalue(key);
        if (searchKey(key) != this->hashtable[idx].end()) // key is present
        { 
        this->hashtable[idx].erase(searchKey(key));
            cout << key << " is deleted" << endl;
        }
        else
            cout << "Key is not present in the hashtable" << endl;
    }
};
int main()
{
    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);
    h.deleteKey(3);
    h.deleteKey(3);
    return 0;
}