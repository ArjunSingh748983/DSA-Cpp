#include <bits/stdc++.h>
using namespace std;
class MyStack {
public:
    queue<int> qu;

    MyStack() {}

    void push(int x) { qu.push(x); }

    int pop() {
        queue<int> temp;
        while (qu.size() > 1) {
            temp.push(qu.front());
            qu.pop();
        }
        int res = qu.front();
        qu.pop();
        while (!temp.empty()) {
            qu.push(temp.front());
            temp.pop();
        }
        return res;
    }

    int top() {
        queue<int> temp;
        while (qu.size() > 1) {
            temp.push(qu.front());
            qu.pop();
        }
        int res = qu.front();
        temp.push(res); // Preserve the top element in temp
        qu.pop();
        while (!temp.empty()) {
            qu.push(temp.front());
            temp.pop();
        }
        return res;
    }

    bool empty() { return qu.size() == 0; }
};
int main() {
    
    return 0;
}