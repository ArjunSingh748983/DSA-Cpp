#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums)
{
    int rightptr = nums.size() - 1;
    int leftptr = 0;
    while (leftptr < rightptr)
    {

        if (nums[leftptr] % 2 == 1 && nums[rightptr] % 2 == 0)
        {
            swap(nums[leftptr], nums[rightptr]);
            leftptr++;
            rightptr--;
        }
        if (nums[leftptr] % 2 == 0)
            leftptr++;
        if (nums[rightptr] % 2 == 1)
            rightptr--;
    }

    return nums;
}
int main()
{
    vector<int> v;
    cout << "Enter the no of elements : " << endl;
    int n;
    cin >> n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    sortArrayByParity(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}