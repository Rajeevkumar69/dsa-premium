#include <iostream>
using namespace std;

int main()
{

     int n = 8;

     for (int i = 0; i < 2 * n - 1; i++)
     {
          int row = (i < n) ? i : 2 * n - 2 - i;

          for (int j = 0; j < 2 * n - 1; j++)
          {
               if (j >= n - 1 - row && j <= n - 1 + row)
                    cout << "*";
               else
                    cout << " ";
          }

          cout << "\n";
     }

     return 0;
}