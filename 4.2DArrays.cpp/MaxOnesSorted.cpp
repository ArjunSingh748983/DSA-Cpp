#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int MaxOnesRow(vector<vector<int> > &v)
{

    int max = INT_MIN;
    int row = -1;
    for (int i = 0; i < v.size(); i++)
    {
        int MaxOnes = INT_MIN;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                MaxOnes = v[0].size() - j;
                break;
            }
        }
        if (MaxOnes > max)
        {
            max = MaxOnes;
            row = i;
        }
    }

    return row;
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
    cout << "\nMax number of ones are in row : " << MaxOnesRow(v);

    return 0;
}