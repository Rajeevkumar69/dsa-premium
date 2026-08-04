#include <iostream>
using namespace std;

int main()
{
     int arr[5] = {10, 20, 30, 66, 50};
     int n = sizeof(arr) / sizeof(int);
     int largest = arr[0];

     for (int i = 0; i < n; i++)
     {
          if (arr[i] > largest)
          {
               largest = arr[i];
          }
     }
     cout << largest;
     return 0;
}