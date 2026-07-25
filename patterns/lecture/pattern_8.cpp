#include <iostream>
using namespace std;

int main()
{
     int n = 6;
     int num = 1;
     for (int i = 0; i <= n; i++)
     {
          for (int j = 0; j <= n; j++)
          {
               if (j <= i)
               {
                    cout << num++ << " ";
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