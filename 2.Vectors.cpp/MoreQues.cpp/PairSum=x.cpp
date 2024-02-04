#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int leftPtr = 0;
    int rightPtr = n - 1;
    int targetSum = 7;
    bool flag = false;
    while (leftPtr < rightPtr)
    {

        if (arr[leftPtr] + arr[rightPtr] == targetSum)
        {
            flag = true;
            break;
        }
        else if (arr[leftPtr] + arr[rightPtr] > targetSum)
            rightPtr--; // Sum is greater than Targetsum,reduce the sum.

        else
            leftPtr++; // Sum is less than Targetsum, increase the sum.
    }
    if (flag == true)
        cout << "FOUND!";
    else
        cout << "NOT FOUND!";
    return 0;
}