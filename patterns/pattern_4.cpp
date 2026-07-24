#include <iostream>
using namespace std;

int main()
{
     int n = 6;
     int k = 1;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j <= i)
               {
                    cout << k++;
               }
               else
               {
                    cout << " ";
               }
          }
          k = 1;
          cout << "\n";
     }
     return 0;
}