#include <iostream>
using namespace std;

int main()
{
     int arr[] = {10, 20, 30, 50, 120};

     // Formula to calculate the length of array
     int n = sizeof(arr) / sizeof(int);

     cout << "Size of array is: " << n;

     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
     return 0;
}