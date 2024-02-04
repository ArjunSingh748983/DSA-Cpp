#include <iostream>
#include <vector>
using namespace std;

void SortZeroesAndOnes(vector<int> &v)
{

    int zeroes_Count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            zeroes_Count++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes_Count)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    SortZeroesAndOnes(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}