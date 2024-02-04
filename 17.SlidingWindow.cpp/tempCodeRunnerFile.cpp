#include <bits/stdc++.h>
using namespace std;
// P.S-> Print the first negative integer in every window of size k
vector<int> printFirstNegative(vector<int>&arr,int k,vector<int>&ans){ // k is the window size
    int s=0;
    int e=0;
    int n=arr.size();
    list<int>temp;
    while(s<n){
        int window=e-s+1;
        if(arr[e]<0) temp.push_back(arr[e]);
        if(window<k) e++;
        else if(window==k){
            if(temp.size()==0) ans.push_back(0);
            else ans.push_back(temp.front());
            if(temp.front()<0) temp.pop_front();
            s++;
            e++;
        }
    }
return ans;
}
int main() {
    vector<int>arr{12,-1,-7,8,-15,30,16,28};
    int window=3;
    vector<int>ans;
    printFirstNegative(arr,window,ans);
    for( int i=0;i<ans.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}