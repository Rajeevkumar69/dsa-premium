#include <iostream>
#include <vector>
using namespace std;

/*Q1: Use the bubble sort algorithm to sort the
array in descending order
*/

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
     vector<int> arr = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
     int n = arr.size();

     vector<int> result = bubbleSort(arr, n);
     for (int val : result)
     {
          cout << val << " ";
     }
     return 0;
}