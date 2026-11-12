#include <iostream>
using namespace std;

int main()
{
     int arr[5];

     // Formula to calculate the length of array
     int n = sizeof(arr) / sizeof(int);

     cout << "Size of array is: " << n << "\n";

     // Input in array
     cout << "Enter Student Marks:- \n";

     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }

     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
     return 0;
}