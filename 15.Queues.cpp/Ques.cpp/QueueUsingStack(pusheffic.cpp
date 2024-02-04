#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> st;

public:
    void push(int x)
    { // queue.push
        this->st.push(x);
    }
    void pop()
    { // queue.dequeue
        if (this->st.empty())
            return;
        stack<int> temp;
        while (this->st.size() > 1)
        {
            temp.push(this->st.top());
            this->st.pop();
        }
        // stack size is 1 and we are at bottom element
        this->st.pop();
        while (!temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
    }
    bool isEmpty()
    {
        return this->st.empty();
    }
    int front()
    {
        if (this->st.empty())
            return -1;
        stack<int> temp;
        while (this->st.size() > 1)
        {
            temp.push(this->st.top());
            this->st.pop();
        }
        int result = this->st.top();
        while (!temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};
int main()
{
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    while (!qu.isEmpty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}