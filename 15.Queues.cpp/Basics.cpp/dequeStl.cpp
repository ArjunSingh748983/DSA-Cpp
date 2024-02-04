#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(4);
    dq.push_front(5);
    dq.push_back(6);
    dq.push_front(8);
    dq.push_back(9);
    dq.push_front(1);
    dq.pop_back();
    dq.pop_front();
    cout << dq.front() << " ";
    cout << dq.back() << endl;
    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}