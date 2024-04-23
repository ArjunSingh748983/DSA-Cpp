#include <bits/stdc++.h>
using namespace std;

// Functional Recursion :
int f(int n)
{
    if (!n) return 0;
    return n + f(n - 1);
}

// Parameterised recursion :
void f1(int n, int sum)
{
    if (!n)
    {
        cout << sum;
        return;
    }
    f1(n - 1, sum + n);
}

int main()
{
    int n = 5; // 5 + 4 + 3 + 2 + 1
    f1(5, 0);
    cout << endl;
    cout << f(5);
    return 0;
}