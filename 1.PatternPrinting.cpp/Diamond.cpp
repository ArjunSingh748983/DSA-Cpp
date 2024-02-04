

//           i=1         *    n=7
//           i=2        ***
//           i=3       *****
//   ml      i=4      *******
//           i=5       *****
//           i=6        ***
//           i=7         *
//
//
//

#include <iostream>
using namespace std;
int main()
{
  printf("Enter the value of n : ");
  int n;
  scanf("%d", &n);
  int ml = (n / 2) + 1;
  int spaces = n / 2;
  int stars = 1;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }
    for (int k = 1; k <= stars; k++)
    {
      cout << "*";
    }
    if (i < ml)
    {
      spaces--;
      stars += 2;
    }
    else
    {
      spaces++;
      stars -= 2;
    }
    cout << endl;
  }

  return 0;
}
