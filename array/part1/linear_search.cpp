#include <iostream>
using namespace std;

int main()
{
     int arr[] = {10, 20, 30, 26, 55, 12, 23};
     int target = 26;

     int n = sizeof(arr) / sizeof(int);

     for (int i = 0; i < n; i++)
     {
          if (arr[i] == target)
          {
               cout << i;
               return 0;
          }
     }
     cout << -1;
     return 0;
}