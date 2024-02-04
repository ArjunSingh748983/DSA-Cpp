#include <iostream>
#include <vector>
using namespace std;

int RectangularSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    // Prefix sum row-wise :

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    // Prefix sum columnwise :

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i - 1][j];
        }
    }

    // PreFix Sum Matrix printing :

    /*for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/

    int Sum = 0;
    int TopSum = 0, LeftSum = 0, TopLeftSum = 0;
    if (l1 != 0)
        TopSum = matrix[l1 - 1][r2];
    if (r1 != 0)
        LeftSum = matrix[l2][r1 - 1];
    if (l1 != 0 and r1 != 0)
        TopLeftSum = matrix[l1 - 1][r1 - 1];

    Sum = matrix[l2][r2] - TopSum - LeftSum + TopLeftSum;  // MAIN CODE

    return Sum;
}

int main()
{
    cout << "Enter the size of the vector :";
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << "Enter the coordinates l1,r1 and l2,r2 :";
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    cout << RectangularSum(v, l1, r1, l2, r2);

    return 0;
}