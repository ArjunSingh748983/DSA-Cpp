#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }

    node(int data, node *next, node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

// CONVERT ARRAY TO DOUBLY LINKED-LIST->
node *convertArrayToDll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next; // or prev=temp
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

/***************************************** DELETION OPERATIONS ****************************************************/

// DELETE THE HEAD ->
node *deleteHead(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

// DELETE TAIL OF THE DLL ->
node *deleteTail(node *head)
{
    if (head == nullptr or head->next == nullptr)
        return nullptr;
    node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    node *newTail = tail->back;
    tail->back = nullptr;
    newTail->next = nullptr;
    delete tail;
    return head;
}

// DELETE Kth ELEMENT ->
node *deleteKthElement(node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    int count = 0;
    node *kNode = head;
    while (kNode) // get to the kth node
    {
        count++;
        if (count == k)
            break;
        kNode = kNode->next;
    }
    node *front = kNode->next;
    node *prev = kNode->back;
    if (front == nullptr and prev == nullptr) // single node in the linked list
    {
        return nullptr;
    }
    else if (front == nullptr) // tail
    {
        return deleteTail(head);
    }
    else if (prev == nullptr) // head
    {
        return deleteHead(head);
    }
    else
    {
        prev->next = front;
        front->back = prev;
        kNode->next = nullptr;
        kNode->back = nullptr;
        delete kNode;
    }
    return head;
}

//  DELETE NODE ->
void deleteNode(node *temp)
{
    node *prev = temp->back;
    node *front = temp->next;
    if (front == nullptr)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->back = temp->next = nullptr;
    free(temp);
}

/*************************** INSERTION BEFORE THE HEAD *******************************************/


int main()
{
    vector<int> arr{2, 4, 6, 9, 7};
    node *head = convertArrayToDll(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head = deleteKthElement(head, 1);
    deleteNode(head->next->next);
    printLL(head);
    return 0;
}