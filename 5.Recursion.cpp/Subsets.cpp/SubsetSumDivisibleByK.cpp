#include <iostream>
#include <vector>
#include <string>
using namespace std; // print all the subsets of an array whose sum is divisble by k using recursion take previous question's reference
int SubsetSumHelper(int x, int sum = 0)
{
    if (x == 0)
        return 0;
    return x % 10 + SubsetSumHelper(x / 10, sum);
}

void printSubsets(char arr[], int n, int i, string s)
{
    if (i == n)
    {
        int x = stoi(s);
        if ((SubsetSumHelper(x, 0)) % 2 == 0)
            cout << "{" << s << "}" << "\n";
        return;
    }
    printSubsets(arr, n, i + 1, s + arr[i]);
    printSubsets(arr, n, i + 1, s);
}
int main()
{
    char arr[] = "123";
    int n = 3;
    string s = "";
    printSubsets(arr, n, 0, s);
    return 0;
}