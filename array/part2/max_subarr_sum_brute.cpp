#include <iostream>
using namespace std;

void printMaxSubarrSum(int *arr, int n)
{
     int maxSum = INT_MIN;

     for (int st = 0; st < n; st++)
     {
          for (int end = st; end < n; end++)
          {
               int currSum = 0;
               for (int i = st; i <= end; i++)
               {
                    currSum += arr[i];
               }
               maxSum = max(maxSum, currSum);
          }
     }
     cout << maxSum;
}

int main()
{
     int arr[] = {-1, 2, 5, -3, -4, -8};
     int n = sizeof(arr) / sizeof(n);

     printMaxSubarrSum(arr, n);
     return 0;
}