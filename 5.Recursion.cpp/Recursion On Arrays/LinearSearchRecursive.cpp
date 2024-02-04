#include <iostream>
#include <vector>
using namespace std;
bool isPresent(int *arr, int n, int i, int key)
{
    if (i == n) // array is exhausted
        return false;
    bool result = (arr[i] == key || isPresent(arr, n, i + 1, key));
    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;
    cout << boolalpha << isPresent(arr, n, 0, key); // boolalpha is a manipulator convert 1,0 to true and false respectively
    return 0;
}