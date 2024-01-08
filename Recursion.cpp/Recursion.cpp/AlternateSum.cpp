#include <iostream>
#include <vector>
using namespace std;
int AlternateSum(int n)
{
    if (n == 0)
    return 0;
    return AlternateSum(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}
int main() {
    cout << AlternateSum(8);
    return 0;
}