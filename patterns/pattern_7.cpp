#include <iostream>
using namespace std;

int main()
{
     int n = 6;
     for (int i = 0; i <= n; i++)
     {
          for (int j = 0; j <= n; j++)
          {
               if (j >= n + 1 - i)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << "\n";
     }
     return 0;
}

/*

    * 1 4    j>=4    j>= 5-i
   ** 2 34   j>=3
  *** 3 234  j>=2
 **** 4 1234 j>= 1
*/