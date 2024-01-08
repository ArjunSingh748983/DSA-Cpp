# include <iostream>
# include <vector>
 using namespace std;

int main() {
    vector<int>v;
    int key=6;
    int element;
    int index=0;
    for(int i=0;i<7;i++){
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++){  
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){   // for optimization traverse from i=v.size-1 to i=0 
        if(v[i]==key) { index=i;     //--> first occurr of key from end will be last occurr of key from beginning
        break;
        } 
    }
    cout<<"last index of "<<key<<" is : "<<index;
    return 0;
}