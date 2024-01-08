#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age;
    int weight;
    string name;
    ~Animal()
    {
        cout << "I'm inside destructor" << endl;
    }
};
int main()
{
    cout << "Dog->" << endl;
    Animal dog; // static allocation me destructor is called automatically
    cout << "cat->" << endl;
    Animal *Cat = new Animal;
    delete Cat; // in dynamic allocation , you have to delete the object manually using delete keyword
    return 0;
}