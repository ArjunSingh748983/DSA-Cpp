#include <iostream>
#include <vector>
using namespace std;

// Euclid's Algorithm :
// when a> :
// GCD(a,b)=GCD(b,a%b)=GCD(b,a-b)

int GCD(int a, int b)
{
    if (b > a)
        return GCD(b, a);
    if (b == 0)
        return a;         // if(b==a) return a;
    return GCD(b, a % b); // return GCD(b,a-b);
}

int main()
{
    cout << GCD(18, 3);
    return 0;
}