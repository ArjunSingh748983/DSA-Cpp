#include <bits/stdc++.h> // prefix : op_v1_v2
using namespace std;
int priority(char op)
{
    if (op == '*' or op == '/')
        return 2;
    return 1;
}
int main()
{
    string infix = "9-(5+3)*4/6"; // -9/*+5346
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < infix.size(); i++)
    {
        char ch = infix[i];
        if (ch >= 48 and ch <= 57)
        {
            string s = "";
            s += ch;
            val.push(s);
        }
        else if (op.empty() or ch == '(' or op.top() == '(')
            op.push(ch);
        else if (ch == ')')
        {
            while (op.top() != '(')
            {
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char o = op.top();
                string res = "";
                res += o;
                res += v1;
                res += v2;
                op.pop();
                val.push(res);
            }
            op.pop(); // '(' removed
        }
        else
        {
            if (priority(op.top()) >= priority(ch))
            {
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char o = op.top();
                string res = "";
                res += o;
                res += v1;
                res += v2;
                op.pop();
                val.push(res);
            }
            op.push(ch);
        }
    }
    while (val.size() > 1)
    {
        string v2 = val.top();
        val.pop();
        string v1 = val.top();
        val.pop();
        char o = op.top();
        string res = "";
        res += o;
        res += v1;
        res += v2;
        op.pop();
        val.push(res);
    }
    cout << val.top();
    return 0;
}