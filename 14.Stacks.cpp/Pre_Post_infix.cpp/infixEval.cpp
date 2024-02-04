#include <bits/stdc++.h>
using namespace std;
int eval(int v1, int v2, char op)
{
    if (op == '+')
        return v1 + v2;
    else if (op == '-')
        return v1 - v2;
    else if (op == '*')
        return v1 * v2;
    else if (op == '/')
        return v1 / v2;
    return 0;
}
int priority(char op)
{
    if (op == '*' or op == '/')
        return 2;
    return 1;
}
int main()
{
    string str = "9-(5+3)*4/6";
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch >= 48 and ch <= 57)
            val.push(ch - '0');
        else if (op.empty() or ch == '(' or op.top() == '(')
            op.push(ch);
        else if (ch == ')')
        {
            while (op.top() != '(')
            {
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                int res = eval(v1, v2, op.top());
                op.pop();
                val.push(res);
            }
            op.pop(); // '(' removed
        }
        else
        {
            if (priority(op.top()) >= priority(ch))
            {
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                int res = eval(v1, v2, op.top());
                op.pop();
                val.push(res);
            }
            op.push(ch);
        }
    }
    while (val.size() > 1)
    {
        int v2 = val.top();
        val.pop();
        int v1 = val.top();
        val.pop();
        int res = eval(v1, v2, op.top());
        op.pop();
        val.push(res);
    }
    cout << val.top();
    return 0;
}