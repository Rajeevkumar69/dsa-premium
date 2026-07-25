#include <iostream>
using namespace std;

int main()
{
     int n = 5;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j <= n)
               {
                    cout << i;
               }
               else
               {
                    cout << " ";
               }
          }
          cout << "\n";
     }
}

// 1 1 1 1  1 1234 j<=4
// 2 2 2 2  2 1234 j<=4  j<=4
// 3 3 3 3  3 1234 j<=4
// 4 4 4 4  4 1234 j<=4