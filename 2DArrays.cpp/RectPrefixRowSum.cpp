#include <iostream>
#include <vector>
using namespace std;
int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;

    // 2D MATRIX -> 2D PREFIXSUM MATRIX(rowsie) :
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    for (int i = l1; i <= l2; i++)
    {
        if (r1 != 0)
        {
            sum += matrix[i][r2] - matrix[i][r1 - 1]; // MAIN CODE
        }
        else // matrix[i][r1-1]=0

            sum += matrix[i][r2] - matrix[i][r1 - 1]; // MAIN CODE
    }
    return sum;
}

int main()
{
    cout << "Enter number of rows and columns : ";
    int n, m;
    cin >> n >> m;
    cout << "Enter the elements of the matrix : ";
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // OUTPUT :
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the coordinates l1,r1,l2,r2 : ";
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    cout << rectangleSum(v, l1, r1, l2, r2);
    return 0;
}