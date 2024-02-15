#include <bits/stdc++.h>
using namespace std;
// void print(int n)
// {   if (n == 0) return;
//     print(n - 1);
//     cout << n << endl;
// }

void print(int n, int i)
{
    if (n < i) return;
    print(n, i + 1);
    cout << i << endl;
}
int main()
{
    print(5, 1);
    return 0;
}