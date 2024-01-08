# include <iostream>
# include <vector>
 using namespace std;

// Concept of frequency Array : 

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter queries : ";
    int q;
    cin>>q;
    const int N=1e5+10; // Scientific Notation for 10^5.
    vector<int> freq(N,0); 
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
        }

    // for(int i=0;i<n;i++){    // If you wanna print the frequency array
    //     cout<<freq[i]<<" ";
    // }

    


    
    return 0;
}