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
string preToPost(string &str)
{
    stack<string> st;
    for (int i = str.size() - 1; i >= 0; i--)
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
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            char op = ch; // v1+v2+op
            string t = "";
            t = v1 + v2 + op;
            st.push(t);
        }
    }
    return st.top();
}
int main()
{
    string str = "-9/*+5346";
    cout << preToPost(str);
    return 0;
}