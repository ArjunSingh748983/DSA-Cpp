# include <iostream>
# include <bits/stdc++.h>
 using namespace std;

int main() {
    // Wild Pointers :
    // -> Pointers which are declared but not initialised
   int* p1; // Stores Garbage Address
   int* p2=NULL; 
   int* p3=0;
   int* p4='\0';
   // p1,p2,p3 all are same.
   cout<<p1<<" "<<p2<<" "<<p3<<" ";
   
   
   
   
   
    return 0;
}