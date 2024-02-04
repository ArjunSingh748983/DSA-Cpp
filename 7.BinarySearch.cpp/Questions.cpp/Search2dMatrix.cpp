#include <bits/stdc++.h>
using namespace std;
vector<int> SearchMatrix(vector<vector<int> > &mat, int target, vector<int> &result)
{ // hypothetically flatten a 2d matrix and perform binary search
    int low = 0;
    int n = mat.size();
    int m = mat[0].size();
    int high = m * n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;
        if (mat[row][col] == target)
        {
            result.push_back(row);
            result.push_back(col);
        }
        else if (mat[row][col] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return {-1, -1};
}
int main()
{
    vector<vector<int> > matrix={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> result;
    int target = 5;
    SearchMatrix(matrix, target, result);
    cout << result[0] << " " << result[1];
    return 0;
}