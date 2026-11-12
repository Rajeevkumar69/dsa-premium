#include <iostream>
#include <vector>
using namespace std;

vector<int> countingSort(vector<int> &nums, int n)
{
     int freq[100000] = {0};
     int minValue = INT_MAX, maxVal = INT_MIN;

     for (int i = 0; i < n; i++)
     {
          minValue = min(minValue, nums[i]);
          maxVal = max(maxVal, nums[i]);
     }

     for (int i = 0; i < n; i++)
     {
          freq[nums[i]]++;
     }

     for (int i = minValue, j = 0; i <= maxVal; i++)
     {
          while (freq[i] > 0)
          {
               nums[j++] = i;
               freq[i]--;
          }
     }
     return nums;
}

int main()
{
     vector<int> arr = {5, 4, 1, 2, 6, 5, 8, 0};
     int n = arr.size();

     vector<int> result = countingSort(arr, n);
     for (int val : result)
     {
          cout << val << ",";
     }
     return 0;
}