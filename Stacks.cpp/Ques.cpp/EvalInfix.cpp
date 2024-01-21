#include <bits/stdc++.h>
using namespace std;
int calc(int v1, int v2, char op)
{
    if (op == '^')
        return pow(v1, v2);
    else if (op == '+')
        return v1 + v2;
    else if (op == '-')
        return v1 - v2;
    else if (op == '*')
        return v1 * v2;
    else
        return v1 / v2;
}
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' or ch == '/')
        return 2;
    else if (ch == '+' or ch == '-')
        return 1;
    else
        return -1;
}
int evalInfix(string &str)
{
    stack<int> nums;
    stack<char> ops;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
            nums.push(str[i] - '0');
        else if (str[i] == '(')
            ops.push('(');
        else if (str[i] == ')')
        {
            while (!ops.empty() and ops.top() != '(')
            {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            if (!ops.empty())
                ops.pop();
        }
        else
        {
            while (!ops.empty() and precedence(ops.top()) >= precedence(str[i]))
            {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }
    while (!ops.empty())
    {
        char op = ops.top();
        ops.pop();
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(calc(v1, v2, op));
    }
    return nums.top();
}
int main()
{
    string str = "1*(2*(3-1)+2)";
    cout << evalInfix(str);
    return 0;
}