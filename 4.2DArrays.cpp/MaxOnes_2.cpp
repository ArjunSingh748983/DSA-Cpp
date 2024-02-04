#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int MaxOnesRow(vector<vector<int> > &v)
{

    int leftMostOne = -1;
    int MaxOnesRow = -1;
    int j = v[0].size() - 1;

    // Finding leftmost one in 0th row;
    while (j >= 0 and v[0][j] == 1)
    {
        // leftMostOne = j;
        MaxOnesRow = 0;
        j--;
    }
    // Check in remaining if there is a one left to the leftmost one.

    for (int i = 0; i < v.size(); i++)
    {
        while (j >= 0 and v[i][j] == 1)
        {

            // leftMostOne = j;
            MaxOnesRow = i;
            j--;
        }
    }

    return MaxOnesRow;
}

int main()
{
    cout << "Enter the size of the array : ";
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(n));
    // INPUT :
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j]; // You must define the size of the 2D-vector before taking the inputs
        }
    }
    // OUTPUT :
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMaximum number of ones are in row : " << MaxOnesRow(v);

    return 0;
}