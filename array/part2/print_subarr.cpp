#include <iostream>
using namespace std;

// Sub array is an continous part of an array
// TC:- O(n3)
void printSubArr(int *arr, int n)
{
     for (int st = 0; st < n; st++)
     {
          for (int end = st; end < n; end++)
          {
               for (int i = st; i <= end; i++)
               {
                    cout << arr[i];
               }
               cout << "\n";
          }
     }
}

int main()
{
     int arr[] = {1, 2, 3, 6, 5};

     int n = sizeof(arr) / sizeof(int);

     printSubArr(arr, n);
     return 0;
}