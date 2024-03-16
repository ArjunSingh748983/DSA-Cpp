#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size(); // MOORE VOTING ALGO , find element appearing more than n/2 times
    int candidate = nums[0];
    int votes = 0;
    for (int x : nums) {
        if (x != candidate) votes--;
        else votes++;
        if (votes == 0) {
            candidate = x;
            votes = 1;
        }
    }
    return candidate;
}
int main()
{

    return 0;
}