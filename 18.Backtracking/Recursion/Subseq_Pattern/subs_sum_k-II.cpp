#include <bits/stdc++.h>
using namespace std;
/********************* V.V.I.M.P. PATTERN ************************/
// print only one subs with sum k -> use functional recursion when asked to generate only one out of many answers

bool subseq_sum_k(vector<int>&arr,vector<int>&ds,int i,int sum,int k){
    if(i==arr.size()){
        if(sum==k){ // condition satisfied
            for(auto x : ds){
                cout<<x<<" ";
            }
            cout<<"\n";
            return true;
        }
        return false; // condition not satisfied
    }
    ds.push_back(arr[i]);
    sum+=arr[i];
    if(subseq_sum_k(arr,ds,i+1,sum,k)==true) return true;     // pick
    ds.pop_back();
    sum-=arr[i];
    if(subseq_sum_k(arr,ds,i+1,sum,k)==true) return true; // not pick 
    return false;
}
int main() {
    vector<int>arr{1,2,3,-1,-2,0,1,4};
    vector<int>ds;
    int k=1;
    subseq_sum_k(arr,ds,0,0,k);
    return 0;
}