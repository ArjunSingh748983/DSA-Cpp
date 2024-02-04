#include <bits/stdc++.h>
using namespace std;
class Animal // making a class is itself an example of encapsulation
{
private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
int main()
{
    cout << "Hi" << endl;
    return 0;
}