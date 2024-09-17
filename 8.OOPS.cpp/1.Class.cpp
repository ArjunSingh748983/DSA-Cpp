#include <bits/stdc++.h>
using namespace std;
class Animal
{
    // states/attributes
// private:
public:
    int weight;
    char gender;
    string name;
    // Behaviour/Methods

    void sleep() {
        cout << "sleeping" << endl;
    }

public:
    Animal(){};
    Animal(string name){
        this->name=name;
    }
    void eat(){
        cout << "eating" << endl;
    }
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }
    ~Animal(){
        cout<<"hello";
    }
};
int main() {
    int n ;
    cin>>n;
    Animal *arr = new Animal[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter name of "<<i+1<<" th Animal"<<endl;
        string nameOfAnimal;
        cin>>nameOfAnimal;
        arr[i] = Animal(nameOfAnimal);
    }
    for(int i = 0;i<n;i++) cout<<"Animal "<<i+1
    << " is "<<arr[i].name<<"\n";
    delete []arr;
    return 0;
}