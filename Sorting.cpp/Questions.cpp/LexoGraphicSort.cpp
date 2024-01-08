#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void LexoGraphicSort(vector<string> &fruits) // Using Selection Sort
{
    int n = fruits.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (fruits[minIdx] > fruits[j]) // It automatically checks in lexogrphical order
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swap(fruits[minIdx], fruits[i]);
        }
    }
}

int main()
{
    vector<string> fruits = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    LexoGraphicSort(fruits);
    int n = fruits.size();
    for (int i = 0; i < n; i++)
    {
        cout << fruits[i] << " ";
    }
    return 0;
}