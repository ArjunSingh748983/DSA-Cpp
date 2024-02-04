#include <bits/stdc++.h>
using namespace std;
bool hasAllAlphabets(string str)
{

    if (str.size() < 26)
        return false;
    set<char> set1;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = tolower(str[i]);
        set1.insert(ch);
    }
    // in one go to convert whole string to lowercase
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    return set1.size() == 26;
}
int main()
{
    string str = "abcdefghijkLMNOPqRsTUVwxyzvhjvckeb";
    cout << boolalpha << hasAllAlphabets(str);
    return 0;
}