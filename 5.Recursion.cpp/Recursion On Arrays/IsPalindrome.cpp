#include <iostream>
#include <vector>
using namespace std;
bool IsPalindrome(int num, int *temp) // 12321
{
    // base case :                 // we have assumed that the function IsPalindrome checks whether 
    if (num >= 0 and num <= 9)    //the number is palindrome or not by reading num form L->R and temp from R->L
    {                                       // IsPalindrome(n/10) reads 12321 from L->R till second last digit and temp(12321) from 
        int lastDigitOfTemp = (*temp) % 10; // R->L till second digit
        (*temp) /= 10;
        return (num == lastDigitOfTemp); 
    }
    bool result = (IsPalindrome(num / 10, temp) and (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}
int main()
{
    int num = 12321;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout << IsPalindrome(num, temp);

    return 0;
}