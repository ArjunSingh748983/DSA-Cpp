#include <bits/stdc++.h>
using namespace std;
// void rev(vector<int>&arr, int l,int r) {
    
//     if (l>=r) return;
//     swap(arr[l],arr[r]);
//     rev(arr, l+1,r-1);
// }

void rev2(vector<int>&arr, int i) {
    
    if (i>=arr.size()/2) return;
    swap(arr[i],arr[arr.size()-1-i]);
    rev2(arr, i+1);
}
int main() {
    vector<int> arr{3, 4, 5, 1, 2, 6};
    // int n = arr.size()-1;
    // rev(arr, 0, n);
    rev2(arr, 0);
    for(auto x: arr) cout<<x<<" ";
    return 0;
}