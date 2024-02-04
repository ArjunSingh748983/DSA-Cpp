#include <iostream>
#include <vector>
using namespace std;

void MoveZeroes(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool check = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0 and arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }
        if (!check)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter thr size of the array :\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    MoveZeroes(v);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}