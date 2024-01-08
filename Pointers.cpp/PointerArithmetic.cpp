# include <iostream>
# include <vector>
 using namespace std;

int main() {
    int arr[]={1,5};
    int*ptr=&arr[0];
    // cout<<++*ptr<<endl;
    // Array's name is like it's address(also the address of 0th element)
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<++(*ptr)<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0]<<" "<<arr[1];
    return 0;
}