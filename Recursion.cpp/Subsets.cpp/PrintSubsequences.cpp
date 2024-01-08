#include <iostream>
#include <vector>
#include <string>
using namespace std; // print all the subsets of an array using recursion take previous question's reference
void printSubsets(string arr, int i = 0, string result = "")
{
    if (i == arr.length())
    {
        cout << "{" << result << "}" <<" ,"<<" ";
        return;
    }
    printSubsets(arr, i + 1, result + arr[i]);
    printSubsets(arr, i + 1, result);
}
int main()
{
    string Set="abc";
    int n = Set.length();
    cout<<"All the subsets of Set are : ";
    printSubsets(Set); // i and s were constant/default parameters so we ignored them in the function printSubsets()
    return 0;
}