#include<bits/stdc++.h>
using namespace std;
vector<int> maximumsumSubarray(vector<int> &arr , int n){
    int maxi=INT_MIN;
    vector<int>ans;
    int sum=0;
    int start=0;
    int ansStart=-1;
    int ansEnd=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if (sum < 0){
        sum = 0;
        start=i+1;
        }
    }
    for(int i=ansStart;i<=ansEnd;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
    int main() {
        vector<int>ans{1,-1,2,4,-3,4,5,-1,3,-5};
        vector<int>res=maximumsumSubarray(ans,10);
        for(auto x : res) cout<<x<<" ";
    }