#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "  hello  world  ";
    vector<string> t;
    string wsp = ""; // words withpout spaces
    int j = 0;
    while (s[j] == ' ')
    { // remove initial spaces
        j++;
    }
    int k = 0; // remove trailing spaces
    int b = s.size() - 1;
    while (s[b] == ' ')
    {
        k++;
        b--;
    }
    for (int i = j; i <= b; i++)
    {
        wsp += s[i];
    }
    int rp = 1;
    int lp = 0;
    string st = "";
    while (lp < wsp.size())
    {
        if (lp == wsp.size() - 1)
        {
            st += wsp[lp];
            t.push_back(st);
            break;
        }
        if (wsp[lp] != ' ' and wsp[rp] != ' ')
        {
            st += wsp[lp];
            lp++;
            rp++;
        }
        if (wsp[lp] != ' ' and wsp[rp] == ' ')
        {
            st += wsp[lp];
            t.push_back(st);
            st = "";
            lp++;
            rp++;
        }
        if (wsp[lp] == ' ' and wsp[rp] == ' ')
        {
            lp++;
            rp++;
        }
        if (wsp[lp] == ' ' and wsp[rp] != ' ')
        {
            lp++;
            rp++;
        }
    }
    reverse(t.begin(), t.end()); // now we have a string vector with all the words of the sentence in reverse order.
    string finalSentence = "";
    for (int i = 0; i < t.size(); i++)
    {
        if (i == t.size() - 1)
        {
            finalSentence += t[i];
            break;
        }
        finalSentence += t[i];
        finalSentence += ' ';
    }
    cout << finalSentence;
    return 0;
}