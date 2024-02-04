#include <bits/stdc++.h>
using namespace std;  // With Negative Inputs
void CountSort(vector<int>&arr){ // Space Complexity : O(maxEle+n) |  Time Complexity : O(n+n+n+maxELe)=O(n+maxEle)
    int n=arr.size();  // therefore this algorithm is suitable when maxEle is comparable to the input array size.(maxEle<n*n)
    int maxEle=INT_MIN;
    int minEle=INT_MAX;
    // STEP 0 : FIND THE MINIMUM ELEMENT IN ARRAY :

    for(int i=0;i<n;i++){
        minEle=min(arr[i],minEle);
    }

    // STEP 0.1 ****** SUBTRACT MINIMUM ELEMENT FROM EACH ELEMENT TO NORMALIZE IT : TO MAKE ALL THE ELEMENTS POSITIVE *******
    for(int i=0;i<n;i++){
        arr[i]-=minEle;
    }

    // STEP 1 : FIND THE MAXIMUM ELEMENT IN NORMALIZED ARRAY
    for(int i=0;i<arr.size();i++){
        maxEle=max(arr[i],maxEle);
    }

    // STEP 2 : // freq array of input
    vector<int>freq(maxEle+1,0); 
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // STEP 3 : PREFIX SUM FREQ ARRAY
    for(int i=1;i<freq.size();i++){
        freq[i]+=freq[i-1];
    }

    // STEP 4 : CALCULATE THE SORTED ARRAY
    vector<int>ans(n); // this step makes the count sort algorithm stable
    for(int i=n-1;i>=0;i--){
        ans[--freq[arr[i]]]= arr[i]; 
    }
    
    // STEP 5 : COPY THE ANS BACK TO ORIGINAL ARRAY 
    for(int i=0;i<n;i++){
        arr[i]=ans[i]+minEle; // ************ Finally add the element you subracted before to get the right elements *************
    }
}
int main() {
    vector<int>arr{5,4,-3,-1,-6,9,2,3,2};
    CountSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}