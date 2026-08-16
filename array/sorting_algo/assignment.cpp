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

/*Q1: Use the selection sort algorithm to sort the
array in descending order
*/

vector<int> selectionSort(vector<int> &nums, int n)
{
     for (int i = 0; i < n - 1; i++)
     {
          int minIdxVal = i;

          for (int j = i + 1; j < n; j++)
          {
               if (nums[j] > nums[minIdxVal])
               {
                    minIdxVal = j;
               }
          }
          swap(nums[i], nums[minIdxVal]);
     }
     return nums;
}

int main()
{
     vector<int> arr = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
     int n = arr.size();

     vector<int> result1 = bubbleSort(arr, n);
     for (int val : result1)
     {
          cout << val << " ";
     }
     cout << "\n";

     vector<int> result2 = selectionSort(arr, n);
     for (int val : result2)
     {
          cout << val << " ";
     }
     cout << "\n";

     vector<int> result3 = insertionSort(arr, n);
     for (int val : result3)
     {
          cout << val << " ";
     }
     cout << "\n";

     // vector<int> result4 = countingSort(arr, n);
     // for (int val : result4)
     // {
     //      cout << val << " ";
     // }

     return 0;
}