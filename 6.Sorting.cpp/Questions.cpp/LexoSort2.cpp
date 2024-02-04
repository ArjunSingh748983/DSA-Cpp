#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void LexoGraphicSort(char fruits[][60], int n) // Using Selection Sort and character array
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fruits[minIdx], fruits[j]) > 0) // It means fruits[j] is lexographically smaller than fruits[minIdx]
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
    char fruits[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruits) / sizeof(fruits[0]);
    LexoGraphicSort(fruits, n);
    for (int i = 0; i < n; i++)
    {
        cout << fruits[i] << " ";
    }
    return 0;
}