# include <iostream>
# include <vector>
 using namespace std;
 int DigitSum(int n){  // Time and Space complexities are  O(n) respectively.
    if(n>=0 and n<=9) return n;
    return DigitSum(n/10)+n%10;
 }

int main() {
    cout<<DigitSum(1234);
    return 0;
}