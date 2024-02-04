#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    node(int data, node *next, node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
node *convertArrayToDll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}
void printLL(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Q1 -> Reverse a doubly linked list
void reverseDll_I(node *head) // naive TC : O(2n) & Space :O(n )
{
    node *temp = head;
    stack<int> st;
    while (temp)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
}

// BETTER ->
node *reverseDll_II(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;
    node *curr = head;
    node *back = nullptr;
    while (curr)
    {   // below three lines just swap the links same as temp=a  ->  a=b  ->  b=temp
        back = curr->prev;
        curr->prev = curr->next;
        curr->next = back;
        curr = curr->prev; // move curr ahead
    }
    return back->prev;
}

// Adding Two Numbers in LL

int main()
{
    vector<int> arr{4, 2, 3, 1};
    node *head = new node(arr[0]);
    head = convertArrayToDll(arr);
    head = reverseDll_II(head);
    printLL(head);
    return 0;
}