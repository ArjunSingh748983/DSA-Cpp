#include <iostream>
#include <vector>
using namespace std;
int powRecursive(int a, int b)
{

    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        int result = powRecursive(a, b / 2);
        return result * result;
    }
    else
    {
        int result = powRecursive(a, b / 2);
        return result * result * a;
    }
}
int Armstrong(int n, int d)
{ // Base case :
    if (n == 0)
        return 0;
    return powRecursive(n % 10, d) + Armstrong(n / 10, d);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int NoOfDigits = 0;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        NoOfDigits++;
    }
    int result = Armstrong(n, NoOfDigits);
    if (result == n)
        cout << "It's an Armstrong number!";
    else
        cout << "It's not an Armstrong number!";
    return 0;
}