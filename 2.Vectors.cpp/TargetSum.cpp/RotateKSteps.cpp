# include <iostream>
 using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6};                 // After rotating by k steps :  
    cout<<"Enter the value of k : ";         // 6,1,2,3,4,5  -> S1
    int n=6;                                 // 5,6,1,2,3,4  -> S2
    int k;                                   // 4,5,6,1,2,3  -> S3
    cin>>k;                                  // 3,4,5,6,1,2  -> S4
    int brr[6]; 
    k=k%n; 
    int j=0;
    // Inserting last k elements in brr ->
    for(int i=n-k;i<n;i++){ // 2->0 3->1 4->2
        brr[j++]=arr[i];
    }               
    // Inserting first n-k elements in brr ->       
    for(int i=0;i<n-k;i++){
        brr[j++]=arr[i];
    }     
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }      
    return 0;
}