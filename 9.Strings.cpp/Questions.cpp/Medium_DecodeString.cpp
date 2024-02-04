#include <bits/stdc++.h>
using namespace std;
string decode(string s) // Space complexity : O(n) , n is length of decoded string | T.C : O(n) where n is the length of decoded string
{
    int n = s.size();
    string result = "";
    for (int i = 0; i < n; i++)
    { // keep inserting characters in result string until you encounter a closing bracket ']'
        if (s[i] != ']')
        {
            result += s[i];
        }
        else
        {
            // extract str from result
            string str = "";
            while (!result.empty() and result.back() != '[')
            {
                str += result.back();
                result.pop_back();
            }

            reverse(str.begin(), str.end()); // reverse the string
            // remove last char from the result which is '['
            result.pop_back();
            // extract num from result
            string num = "";

            while (!result.empty() and result.back() >= '0' and result.back() <= '9')
            {
                num += result.back();
                result.pop_back();
            }
            // reverse the num
            reverse(num.begin(), num.end());
            // convert string to integer
            int int_num = stoi(num);
            // inserting str in result int_num times
            
            while (int_num--)
            {
                result += str;
            }
        }
    }
    return result;
}
int main()
{
    string encoded = "3[a]2[bc]";
    cout << decode(encoded);
    return 0;
}