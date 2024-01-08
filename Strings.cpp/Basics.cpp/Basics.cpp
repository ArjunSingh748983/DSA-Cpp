#include <bits/stdc++.h>
using namespace std;

int main() {
    string str="hello"; // strings are objects of a class -> strings
    string str1="Guys";
    string str2;
    //cin>>str2; // doesn't accept spaces
    // cout<<str<<" "<<str1<<" "<<str2;
    // to get input having spaces, use getline function
    // getline(cin,str2);
    // cout<<str2;

    // DIFFERENCES BETWEEN STRINGS AND CHARACTER ARRAYS :

    //          STRINGS                                                                              CHARACTER ARRAYS

    // 1. String is a class,string variables are objects of this class      |                1. Array of character datatype
    // 2. String str_name;                                                  |                2. Char arr[50];
    // 3. Dynamic memory allocation                                         |                3. Static memory allocation
    // 4. No pre allocated memory                                           |                4. Unused allocated memory is wasted
    // 5. Have inbuilt functions                                            |                5. Faster(better for competitive programming)
                                 
 