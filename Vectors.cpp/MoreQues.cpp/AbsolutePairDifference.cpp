#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int leftPtr = 0;
    int rightPtr = 1;
    int targetDifference = 6;
    bool flag = false;
    while (leftPtr < rightPtr)
    {

        if (abs(arr[leftPtr] - arr[rightPtr]) == targetDifference)
        {
            flag = true;
            break;
        }
        else if (abs(arr[leftPtr] - arr[rightPtr]) > targetDifference)
            leftPtr++; // Differnece is greater than TargetDifference,reduce the sum.

        else
            rightPtr++; // Difference is less than TargetDifference, increase the sum.
    }
    if (flag == true)
        cout << "FOUND!";
    else
        cout << "NOT FOUND!";
    return 0;
}