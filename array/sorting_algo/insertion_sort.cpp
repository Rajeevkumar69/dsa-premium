#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> &nums, int n)
{
     for (int i = 1; i < n; i++)
     {
          int curr = nums[i];
          int prev = i - 1;

          while (prev >= 0 && nums[prev] > curr)
          {
               swap(nums[prev], nums[prev + 1]);
               prev--;
          }
          nums[prev + 1] = curr;
     }
     return nums;
}

int main()
{
     vector<int> arr = {5, 4, 1, 2, 3, 6};
     int n = arr.size();

     vector<int> result = insertionSort(arr, n);

     for (int val : result)
     {
          cout << val << ",";
     }
     return 0;
}