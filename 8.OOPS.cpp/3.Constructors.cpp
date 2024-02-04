#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
    int weight;

public:
    int age;
    string name;

    // Constructor :
    // 1. Default Constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Constructor called " << endl;
    }

    // 2. Parameterised Constructor :
    Animal(int age)
    {
        this->age = age;
        cout << "Parameterised Constructor-I called " << endl;
    }

    // With 2 parameters
    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterised Constructor-II called" << endl;
    }

    // With 3 parameters
    Animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "Parameterised Constructor-III called" << endl;
    }

    // 3. COPY CONSTRUCTOR (IMP**)
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->age = obj.age;
        cout << "I'm inside copy constructor " << endl;
    }
};
int main()
{
    Animal *Cat = new Animal; // static declaration
    Animal *dog = new Animal;
    Animal frog(12);
    Animal *dolphin = new Animal(12, 44);
    Animal Manpreet(12, 99, "Manpreet");
    Animal c = frog; // static copy
    Animal animal1(frog);

    return 0;
}