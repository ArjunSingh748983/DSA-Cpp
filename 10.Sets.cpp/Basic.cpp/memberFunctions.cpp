#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>set1={1,2,3,4};
    int key=3;

    // SEARCHING ->
    if(set1.find(key)!=set1.end()){
        cout<<"Value Present!";
    }
    else{
        cout<<"Value not present!";
    }

    return 0;
}