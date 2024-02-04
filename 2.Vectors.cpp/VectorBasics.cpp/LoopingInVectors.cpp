# include <iostream>
# include <vector>
 using namespace std;

int main() {
    vector<int>v;

    // For loop : 
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

        // cin>>v[i]  // if we have declared the vector size
    }

    // for loop (output): 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

    v.insert(v.begin()+2,6);

    // For each loop : 
    // for(int ele:v){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    v.erase(v.end()-2);

    // While loop : 
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    
    return 0;
}