#include <iostream>
#include <limits.h>
using namespace std;
class stack // Implemented using O(1) time complexity
{
private:
    int capacity;
    int *arr;
    int top;

public:
    stack(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->top = -1;
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop()
    {
        if (this->top == -1)
        {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }
        return this->top--;
    }
    int getTop()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty()
    {
        return this->top == -1;
    }
    int size()
    {
        return this->top + 1;
    }
    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl;
    st.pop();
    cout << st.getTop() << endl;
    st.push(1);
    return 0;
}