#include <bits/stdc++.h>
using namespace std;

int main() {
    // reverse(str.begin(),str.end()); // T.C -> O(n);

    // SUBSTRING FUNCTION :
    string s="Arjun Singh";
    cout<<s.substr(2,5)<<endl; // s.substr(position,length) -> string from given position of given size will be printed // T.C- O(length of substring)
    cout<<s.substr(2)<<endl;  // s.substr(position) -> string from given position till end of the string will be printed 
    string s1="Arjun";
    string s2="Singh";
    cout<<s1+s2<<endl; // "+" is string concatenation operator
    s1+=s2; // s2 appended after s1 , no extra space used 
    // s1=s1+s2 // copy of s1 is generated hence extra space is used
    cout<<s1<<endl; 
    
    char s3[]="hello";
    char s4[]="world";
    cout<<strcat(s3,s4)<<endl; // Used to concatenate only character arrays not strings
    string s5="abcd";
    char ch='e';
    s5.push_back(ch); // appends character at the end of the string
    cout<<s5<<endl; 

    // SIZE FUNCTIONS :

    string s6="ABCDE";
    cout<<s6.size()<<endl; // O(1)
    cout<<s6.length()<<endl; // O(1)
    char arr[]="ABCDE";
    cout<<strlen(arr)<<endl; // strlen() is used for character arrays and runs in O(n) time complexity.

    // to_string()

    int num=1234;
    string x=to_string(num); // changes int 1234 to "1234"
    x+="5";
    cout<<x<<endl;

    // sort(str.begin(),str.end()) // Time Complexity :O(nlogn*m) where n is size of vector of strings and m is the general length of each string in the vector of strings
    
    return 0;
}