#include <iostream>
using namespace std;

int main()
{
     int n = 6;
     char c = 'A';
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j <= i)
               {
                    cout << c++;
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