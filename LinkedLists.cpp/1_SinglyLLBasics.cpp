#include <bits/stdc++.h>
using namespace std; // Travesral in linked list is very imp
class node
{
public:
    int data;
    node *next;

    // Constructor with data only to initialise the node :
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    // Constructor with data as well as next :
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
};

// CONVERT ARRAY TO LINKED LIST ->
node *convertArrayAToLinkedList(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head; // mover naam ke pointer mein head ka address store kar diya
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//  LENGTH OF THE LINKED LIST :
int lengthOfLL(node *head)
{
    node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// SEARCHING IN A LL
bool isPresentinLL(node *head, int target)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == target)
            return true;
        temp = temp->next;
    }
    return false;
}

// PRINTING THE DATA IN THE LINKED LIST ->
void printLL(node *head)
{

    node *temp = head;
    while (temp) // this condition means while temp!=nullptr
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/***************************************** DELETION *********************************************/

// DELETION OF HEAD ->
node *deleteHead(node *head)
{
    if (head == nullptr)
        return head;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// DELETION OF TAIL ->
node *deleteTail(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// DELETE kth node ->
node *deleteKthNode(node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    node *temp = head;
    node *prev = nullptr;
    while (temp != nullptr)
    {
        count++;
        if (count == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// REMOVE ELEMENT ->
node *deleteEle(node *head, int ele)
{
    if (head == nullptr)
        return nullptr;
    if (head->data == ele)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *temp = head;
    node *prev = nullptr;
    while (temp)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

/*************************************************** INSERTION ****************************************************/

// INSERT ELEMENT AT THE HEAD ->
node *insertAtHead(node *head, int ele)
{
    if (head == nullptr)
        return new node(ele);
    node *temp = new node(ele, head); // newnode temp points to head and we return temp;
    return temp;
    //  return new node(ele,head); // directly return the new node as head
}

// INSERT AT TAIL ->
node *insertAtTail(node *head, int ele)
{
    if (head == nullptr)
        return new node(ele);
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *newNode = new node(ele);
    temp->next = newNode;
    return head;
}

// INSERT AT THE POSITION
node *insertAtPosition(node *head, int ele, int k)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new node(ele);
        }
        else
            return nullptr;
    }
    if (k == 1)
    {
        return new node(ele, head);
    }
    int count = 0;
    node *temp = head;
    while (temp)
    {
        count++;
        if (count == k - 1)
        {
            node *newNode = new node(ele, temp->next); // same as newnode->next=temp->next
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// INSERT BEFORE A VALUE;
node *insertBeforeValue(node *head, int ele, int val)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == val)
    {
        return new node(ele, head);
    }
    node *temp = head;
    while (temp)
    {
        if (temp->next->data == val)
        {
            node *newNode = new node(ele, temp->next); // same as newnode->next=temp->next
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    // node *node1 = new node(10); // node in heap
    // cout << "Node1 data : " << node1->data << endl;
    // cout << "next node address : " << node1->next << endl;
    // cout << node1; // gives the address of the current node that is node1
    vector<int> arr{1, 9, 6, 4};
    node *head = convertArrayAToLinkedList(arr);
    // printLL(head);
    // head = deleteHead(head);
    // printLL(head);
    // head = deleteTail(head);
    // printLL(head);
    // head = deleteKthNode(head, 2);
    // head = deleteEle(head, 9);
    // head=insertAtHead(head,5);
    // head = insertAtTail(head, 5);
    head = insertBeforeValue(head, 3, 6);
    printLL(head);

    return 0;
}