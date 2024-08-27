#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    int weight;
    void eat() {
        cout << "Eating" << endl;
    }
};

// Inheritance :
class dog : public animal
{
    public:
    int bodyCount;
};

int main() {
    dog pillu;
    pillu.bodyCount = 45;
    return 0;

}