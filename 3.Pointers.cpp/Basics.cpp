// # include <iostream>
// # include <vector>
//  using namespace std;
//   /*  void swap(int*x ,int*y){
//         int temp=*x;
//         *x=*y;
//         *y=temp;
//     } */

// int main() {
//     int x=10,y=20;
//     swap(&x,&y);
//     cout<<x<<" "<<y;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
void FindFirstAndLastIndex(string s, char ch, int *first, int *last)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            *first = i;
            break;
        }
    }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ch)
            {
                *last = i;
                break;
            }
        }
    
}

int main()
{
    int first, last;

    string s = "aadasjkfvsfaddf";
    char ch = 'a';
    int *ps = &first;
    int *pl = &last;
    FindFirstAndLastIndex(s, ch, ps, pl);
    cout << first << " " << last;

    return 0;
}