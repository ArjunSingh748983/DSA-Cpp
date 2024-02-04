# include <iostream>
# include <vector>
# include <limits.h>
 using namespace std;
 int power(int p,int q){
    if(q==0) return 1;
    return p*power(p,q-1);
     }

int main() {
    int x=INT_MIN;
    cout<<abs(INT_MIN);
    return 0;
}