#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
     int st = 0, end = n - 1;
     while (st <= end)
     {
          int mid = st + (end - st) / 2;
          if (arr[mid] == key)
          {
               return mid;
          }
          else if (arr[mid] < key)
          {
               st = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     return -1;
}

int main()
{
     int arr[] = {4, 5, 6, 8, 9, 12};

     int target = 12;
     int n = sizeof(arr) / sizeof(int);

     cout << binarySearch(arr, n, target);
     return 0;
}