#include <bits/stdc++.h>
using namespace std;
void CountSort(vector<int>&arr){ // Space Complexity : O(maxEle+n) |  Time Complexity : O(n+n+n+maxELe)=O(n+maxEle)
    int n=arr.size();  // therefore this algorithm is suitable when maxEle is comparable to the input array size.(maxEle<n*n)
    int maxEle=INT_MIN;

    //STEP 1 : FIND THE MAXIMUM ELEMENT
    for(int i=0;i<arr.size();i++){
        maxEle=max(arr[i],maxEle);
    }

    // STEP 2 : // freq array of input
    vector<int>freq(maxEle+1,0); 
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // STEP 3 : PREFIX SUM FREQ ARRAY -> to tell how many elements are smaller than arr[i] or till which position it should be inserted
    for(int i=1;i<freq.size();i++){
        freq[i]+=freq[i-1];
    }

    // STEP 4 : CALCULATE THE SORTED ARRAY // or We can simplify it by storing the number until its frequency gets exhausted
    vector<int>ans(n); // this step makes the count sort algorithm stable
    for(int i=n-1;i>=0;i--){
        ans[--freq[arr[i]]]= arr[i]; // basically iska matlab h humne arr[i] ko uski correct position di hai joki hai uski freq mein se ek kam vale index par
    }
    
    // STEP 5 : COPY THE ANS BACK TO ORIGINAL ARRAY 
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
int main() {
    vector<int>arr{5,4,3,2,3,2};
    CountSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}