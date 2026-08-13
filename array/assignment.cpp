#include <iostream>
using namespace std;

/*
(EASY)
Q1: Given an integer array nums,return true if any value
appears at least twice in the array, and return false
if every element is distinct.
Examples:
nums=[1,2,3,4]
false
nums=[1,1,1,3,3,4,3,2,4,2]
true
*/

bool checkOccurance(int *arr, int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] == arr[j])
               {
                    return true;
               }
          }
     }
     return false;
}

/*
Q2:
There is an integer array nums sorted in ascending order
(with distinct values).
Given the array nums after the possible rotation and an integer target,
return the index of target if it's in nums,
or-1 if it's not in nums.
nums=[4,5,6,7,0,1,2],target=0
4
nums=[4,5,6,7,0,1,2],target=3
-1
*/

int findTarget(int *nums, int n, int target)
{
     int start = 0, end = n - 1;

     while (start <= end)
     {
          int mid = start + (end - start) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }
          if (nums[start] <= nums[mid])
          {
               if (nums[start] <= target && target <= nums[mid])
               {
                    end = mid - 1;
               }
               else
               {
                    start = mid + 1;
               }
          }
          else
          {
               if (nums[mid] <= target && target <= nums[end])
               {
                    start = mid + 1;
               }
               else
               {
                    end = mid - 1;
               }
          }
     }
     return -1;
}

int main()
{
     int nums[] = {4, 5, 6, 7, 0, 1, 2};
     int n = sizeof(nums) / sizeof(int);

     // bool result = checkOccurance(nums, n);
     // cout << result;

     int result = findTarget(nums, n, 0);
     cout << result;
     return 0;
}