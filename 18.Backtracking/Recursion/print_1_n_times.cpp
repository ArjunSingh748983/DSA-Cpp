#include <bits/stdc++.h>
using namespace std;
void print(int n)
{   if (n == 0) return;
    cout << "1" << endl;
    print(n - 1);
}
int main()
{
    print(5);
    return 0;
}