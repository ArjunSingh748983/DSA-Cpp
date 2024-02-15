#include <bits/stdc++.h>
using namespace std;
void subseq_sum_k(vector<int>&arr,vector<int>&ds,int i,int sum,int k){
    if(i==arr.size()){
        if(sum==k){
            for(auto x : ds){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    ds.push_back(arr[i]);
    sum+=arr[i];
    subseq_sum_k(arr,ds,i+1,sum,k); // pick
    ds.pop_back();
    sum-=arr[i];
    subseq_sum_k(arr,ds,i+1,sum,k); // not pick 
}
int main() {
    vector<int>arr{1,2,3,-1,-2,0,1,4};
    vector<int>ds;
    int k=1;
    subseq_sum_k(arr,ds,0,0,k);
    return 0;
}