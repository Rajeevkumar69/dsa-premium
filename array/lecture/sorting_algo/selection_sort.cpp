#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> &nums, int n)
{
     for (int i = 0; i < n - 1; i++)
     {
          int minIdx = i;

          for (int j = i + 1; j < n; j++)
          {
               if (nums[j] < nums[minIdx])
               {
                    minIdx = j;
               }
          }
          swap(nums[i], nums[minIdx]);
     }
     return nums;
}

int main()
{
     vector<int> arr = {5, 4, 1, 3, 2};
     int n = arr.size();

     vector<int> result = selectionSort(arr, n);
     for (int val : result)
     {
          cout << val << ",";
     }
     return 0;
}