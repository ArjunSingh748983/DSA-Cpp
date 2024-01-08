# include <iostream>
# include <vector>
using namespace std;

int main() {  // Dynamic arrays(VECTORS) : You can resize/insert/delete arrays elements
              // both store elements in contiguous memory locations
    // Declaration :   vector<data type>vector-name(size/optional)
    vector <int> v;  
    vector <int> b(10);  // size is optional
    vector <int> c(5,0); // 5 is size and 0 is starting element 
    return 0;
}