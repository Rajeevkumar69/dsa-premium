#include <iostream>
using namespace std;

int main()
{
     int arr[] = {5, 4, 3, 9, 2};
     int n = sizeof(arr) / sizeof(int);

     // Linear search

     for (int i = n - 1; i >= 0; i--)
     {
          cout << arr[i] << " ";
     }
     cout << "\n\n\n";

     //  Two pointers approach
     int st = 0, end = n - 1;

     while (st < end)
     {
          swap(arr[st], arr[end]);
          st++;
          end--;
     }
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << ",";
     }
     return 0;
}