#include <bits/stdc++.h>
using namespace std; // Scatter and gather approach used  | useful when the elements are scattered around a value closely
void bucketSort(float *arr, int size)
{ // TC = O(n) in best case and O(n+k) in average case and O(n*n) in worst case | space complexity :O(n)

    // STEP 1 ->
    vector<vector<float>> bucket(size, vector<float>());

    // STEP 2 -> INSERTING ELEMENTS INTO BUCKETS
    for (int i = 0; i < size; i++)
    {
        int index = arr[i] * size;
        bucket[index].push_back(arr[i]);
    }
    // STEP 3 -> SORTING INDIVIDUAL BUCKETS
    for (int i = 0; i < size; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }
    // STEP 4 -> COMBINING ELEMENTS FROM BUCKETS INTO A SINGLE ARRAY
    int k = 0;
    for (int i = 0; i < bucket.size(); i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
        }
    }
}
int main()
{
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int size = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}