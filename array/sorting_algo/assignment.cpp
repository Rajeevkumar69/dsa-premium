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

/*Q3: Use the Insertion sort algorithm to sort the
array in descending order
*/

vector<int> insertionSort(vector<int> &nums, int n)
{
     for (int i = 1; i < n - 1; i++)
     {
          int curr = nums[i], prev = i - 1;

          if (nums[prev] > curr)
          {
               swap(curr, prev);
               prev--;
          }
          curr = prev + 1;
     }
     return nums;
}

/*Q4: Use the Counting sort algorithm to sort the
array in descending order
*/

vector<int> countingSort(vector<int> &nums, int n)
{
     int freq[100000] = {0};
     int minVal = INT_MAX, maxVal = INT_MIN;

     for (int i = 0; i < n; i++)
     {
          minVal = min(minVal, nums[i]);
          maxVal = max(maxVal, nums[i]);
     }

     for (int i = 0; i < n; i++)
     {
          freq[nums[i]]++;
     }

     for (int i = minVal, j = 0; i <= maxVal; i++)
     {
          while (freq[i] < 0)
          {
               nums[j++] = i;
               freq[i]--;
          }
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

     vector<int> result4 = countingSort(arr, n);
     for (int val : result4)
     {
          cout << val << " ";
     }

     return 0;
}