#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> st;

public:
    void push(int x)
    {
        stack<int> temp;
        while (!this->st.empty())
        {
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while (!temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
    }
    void pop()
    {
        if (this->st.empty())
            return;
        this->st.pop();
    }
    bool empty()
    {
        return this->st.empty();
    }
    int front()
    {
        if (this->st.empty())
            return INT_MIN;
        return this->st.top();
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
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}