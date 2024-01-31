#include <bits/stdc++.h>
using namespace std;

template <typename T>

class node
{
public:
    T data;
    node *next;
    node(T data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int main()
{
    node<int> *node1 = new node<int>(4);
    cout << node1->data << endl;
    
    node<char> *node2 = new node<char>('a');
    cout << node2->data << endl;
    return 0;
}