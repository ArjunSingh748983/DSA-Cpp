#include <iostream>
#include <vector>
using namespace std;
int power(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = power(p, q / 2);
        return result * result;
    }
    else
    {
        int result = power(p, q / 2);
        return p * result * result;
    }
}

int main()
{
    cout << power(3, 3);
    return 0;
}