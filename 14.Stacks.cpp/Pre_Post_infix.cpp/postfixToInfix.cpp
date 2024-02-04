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
string PostFixtoInfix(string &str)
{
    stack<string> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
            string s = "";
            s += ch;
            st.push(s);
        }
        else
        {
            string v2 = st.top(); // v1 and v2 order changed
            st.pop();
            string v1 = st.top();
            st.pop();
            char op = ch;
            string res = '(' + v1 + op + v2 + ')';
            st.push(res);
        }
    }
    return st.top();
}
int main()
{
    string str = "953+4*6/-";
    cout << PostFixtoInfix(str);
    return 0;
}