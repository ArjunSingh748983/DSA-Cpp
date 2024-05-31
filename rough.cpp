#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr,int i,int n,int max){
  if(i>=n) return max;
  if(arr[i]>max) max=arr[i];
  return f(arr,i+1,n,max);

}
int main() {
    vector<int>arr{1,5,9,7,4,11,-1,-3,3,5,345,345,345,34,534,534,5};
    int ans = 0;
    cout<<f(arr,0,arr.size(),ans);
    return 0;
}