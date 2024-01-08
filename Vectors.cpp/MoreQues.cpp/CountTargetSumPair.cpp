#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {-2, -3, 0, 3, 6, 8, 1, 12};
    int leftPtr = 0;
    int rightPtr = n - 1;
    int targetSum = 9;
    int count=0;
    while (leftPtr < rightPtr)
    {

        if (arr[leftPtr] + arr[rightPtr] == targetSum)
        {
            count++;
            leftPtr++;
            rightPtr--;
        }
        else if (arr[leftPtr] + arr[rightPtr] > targetSum)
            rightPtr--; // Sum is greater than Targetsum,reduce the sum.

        else
            leftPtr++; // Sum is less than Targetsum, increase the sum.
    }
    cout<<"No of unique pairs with sum equal to "<<targetSum<<" are "<<count;
    return 0;
}