#include <iostream>
using namespace std;

void findMaxSubArrSum(int *arr, int n)
{
     int maxSum = INT_MIN;
     int currSum = 0;

     for (int i = 0; i < n; i++)
     {
          currSum += arr[i];
          maxSum = max(maxSum, currSum);

          if (currSum < 0)
          {
               currSum = 0;
          }
     }
     cout << maxSum;
}

int main()
{
     int arr[] = {2, -3, 6, -5, 4, 2};

     int size = sizeof(arr) / sizeof(int);

     findMaxSubArrSum(arr, size);
     return 0;
}