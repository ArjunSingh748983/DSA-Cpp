#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int> > v(3, vector<int>(3));

    // INPUT :
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }
    // TRANSPOSE :
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    // REVERSE ROWS :

    for (int i = 0; i < 3; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    // OUTPUT :
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}