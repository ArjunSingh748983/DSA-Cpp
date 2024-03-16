#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size(); // MOORE VOTING ALGO , find element appearing more than n/2 times
    int candidate = nums[0]; // in n/3 vala ques take 4 variable cand1,cand2,vote1,vote2 and iplement the same algo
    int votes = 0;
    for (int x : nums){
        if (x != candidate) votes--;
        else votes++;
        if (votes == 0){
            candidate = x;
            votes = 1;
        }
    }
    int cnt = 0;
    for (int x : nums){
        if (x == candidate) cnt++;
    }
    if (cnt > n / 2) return candidate;
    return -1;
}
int main()
{

    return 0;
}