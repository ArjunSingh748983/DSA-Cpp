#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class CircularLinkedList
{
public:
    node *head;
    CircularLinkedList()
    {
        this->head = NULL;
    }
    void printCircular()
    {
        node *temp = head;
        for (int i = 0; i < 15; i++)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void display()
    {
        node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void insertAtHead(int val) // O(n)
    {
        node *newnode = new node(val);
        if (!head)
        {
            head = newnode;
            newnode->next = head; // circular linked list
        }
        else
        {
            node *tail = head;
            while (tail->next != head)
            {
                tail = tail->next;
            }
            tail->next = newnode;
            newnode->next = head;
            head = newnode;
        }
    }
    void insertAtTail(int val) // O(n)
    {
        node *newnode = new node(val);
        if (!head)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            node *tail = head;
            while (tail->next != head)
            {
                tail = tail->next;
            }
            tail->next = newnode;
            newnode->next = head;
        }
    }
    void deleteAtHead() // O(n)
    {
        if (!head)
            return;
        node *temp = head;
        node *tail;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        delete temp;
    }
    void deleteTail() // O(n)
    {
        if (!head)
            return;
        node *tail = head;
        while (tail->next->next != head)
        {
            tail = tail->next;
        }
        node *temp = tail->next;
        tail->next = head;
        delete temp;
    }
};
int main()
{
    CircularLinkedList cll;
    cll.insertAtHead(3);
    cll.insertAtHead(2);
    cll.insertAtHead(1);
    cll.insertAtTail(4);
    cll.display();
    cll.deleteAtHead();
    cll.display();
    cll.deleteTail();
    cll.display();
    // cll.printCircular();
    return 0;
}