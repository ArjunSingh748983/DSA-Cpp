#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    int weight;
    void eat()
    {
        cout << "Eating" << endl;
    }
};
class dog : private animal
{ // dog class mein vo sare members private honge jo animal me public the
public:
    void print()
    {
        cout << this->age << endl;
    }
};

int main()
{
    dog d1;
    d1.print();
    // cout<<d1.age; // Inaccessible as age is private in dog class due to private mode of inheritance
    return 0;
}