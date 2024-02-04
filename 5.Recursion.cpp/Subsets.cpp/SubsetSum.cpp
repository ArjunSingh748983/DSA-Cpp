#include <iostream>
#include <vector>
using namespace std; // Pick not Pick strategy is used
void SubsetSum(int*arr,int n,int i,int sum, vector<int>&results){
    if(i==n){
       results.push_back(sum);
       return;
    }
    SubsetSum(arr,n,i+1,sum+arr[i],results); // Element is picked leading to its inclusion in sum
    SubsetSum(arr,n,i+1,sum,results); // element is not picked leading to its seclusion from sum
}
int main() {
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(int);
    vector<int>results;
    SubsetSum(arr,n,0,0,results);
    for(int i=0;i<results.size();i++){
        cout<<results[i]<<" ";
    }
    return 0;
}