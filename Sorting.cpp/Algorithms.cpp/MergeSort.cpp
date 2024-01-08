#include <iostream>
#include <vector> // Stable Sorting algorithm
using namespace std; // Time complexity : O(nlogn) & Space complexity : O(logn+n)=O(n) (O(logn) due to recursive stacks and O(n) due to two temporary arrays a and b)
void merge(vector<int>&arr,int l,int mid,int r){ // Merges arrays from (l to mid) and (mid+1 to r) 
    int an=mid-l+1;  // size of temporary a vector
    int bn=r-mid;    // size of temporary b vector
    vector<int>a(an);
    vector<int>b(bn);
    for(int i=0;i<an;i++){  // copying elements of first half of array in to a temporary array
        a[i]=arr[l+i];      
    }
    for(int j=0;j<bn;j++){ // copying elements of second half of array in to another temporary array
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;       // i->a[0] ,b->b[0] ,k->l[0] , l is the bigger array where subarrays are to be merged
    while(i<an and j<bn){  // merging two sorted arrays using two-pointer approach
        if(a[i]<b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }
    while(i<an) arr[k++]=a[i++]; // if second array was exhausted
    while(j<bn) arr[k++]=b[j++]; // if first array was exhausted
    }
    void mergeSort(vector<int>&arr,int l,int r){ // sorts array from indices l to r
        if(l>=r) return; // when only single element is present in the subarray
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }

int main() {
    vector<int>arr{8,5,7,8,1,3,9,3,4,2,5};
    int n=arr.size();
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}