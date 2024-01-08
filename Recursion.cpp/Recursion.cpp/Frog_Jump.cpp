#include <iostream> // use chatpgt for understanding the code better
#include <vector>
using namespace std;
int MinCost(int *h, int n, int i)
{                   // Recursion is based on trust , you have to trust that your function works fine
    if (i == n - 1) // When on last stone
        return 0;
    if (i == n - 2) // When on second last stone, frog can only do jump of i+1
        return MinCost(h, n, i + 1) + abs(h[i] - h[i + 1]);
    return min((MinCost(h, n, i + 1) + abs(h[i] - h[i + 1])), MinCost(h, n, i + 2) + abs(h[i] - h[i + 2]));
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4; 
    cout << MinCost(arr, n, 0);
    return 0;
}