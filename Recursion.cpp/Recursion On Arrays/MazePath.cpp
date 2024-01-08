#include <iostream>
#include <vector>
using namespace std;
int Ways(int m, int n, int i = 0, int j = 0)
{
    if (i == m - 1 && j == n - 1)
        return 1;
    if (i >= m || j >= n)
        return 0;
    return Ways(m, n, i, j + 1) + Ways(m, n, i + 1, j);
}
int main()
{
    cout << Ways(4, 4);
    return 0;
}