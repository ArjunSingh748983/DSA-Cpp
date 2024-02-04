#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Queue // O(1) time complexity
{
    node *head;
    node *tail;
    int size;

public:
    Queue()
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
    void enqueue(int data)
    {
        node *newNode = new node(data);
        if (this->head == nullptr) // LL is empty
        {
            this->head = this->tail = newNode;
        }
        else // add at tail
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }
    void dequeue() // remove at head;
    {
        if (this->head == NULL)
            return;
        else
        {
            node *oldHead = this->head;
            node *newHead = this->head->next;
            this->head = newHead;
            if (!this->head)
                this->tail = NULL;
            oldHead->next = NULL;
            delete oldHead;
        }
    }
    int getSize()
    {
        return this->size;
    }
    bool isEmpty()
    {
        return this->head == NULL;
    }
    int front()
    {
        if (!head)
            return INT_MIN;
        ;
        return this->head->data;
    }
};
int main()
{
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    while (!qu.isEmpty())
    {
        cout << qu.front() << " ";
        qu.dequeue();
    }
    return 0;
}