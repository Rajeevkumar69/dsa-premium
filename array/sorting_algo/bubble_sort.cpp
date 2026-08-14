#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> &nums, int n)
{

     for (int i = 0; i < n - 1; i++)
     {
          for (int j = 0; j < n - i - 1; j++)
          {
               if (nums[j] < nums[j + 1])
               {
                    swap(nums[j], nums[j + 1]);
               }
          }
     }
     return nums;
}

int main()
{
     vector<int> arr = {5, 4, 1, 3, 2, 6, 5, 8, -1, 0};
     int n = arr.size();

     vector<int> result = bubbleSort(arr, n);

     for (int val : result)
     {
          cout << val << ",";
     }
     return 0;
}