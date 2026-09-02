#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> &nums, int target)
{
     int n = nums.size();
     int st = 0, end = n - 1;
     bool found = false;

     while (st < end)
     {
          int currSum = nums[st] + nums[end];

          if (currSum == target)
          {
               cout << st + 1 << "," << end + 1;

               found = true;
               return;
          }
          else if (currSum < target)
          {
               st++;
          }
          else
          {
               end--;
          }
     }

     if (!found)
     {
          cout << -1 << "," << -1;
     }
}

int main()
{
     vector<int> arr = {2, 7, 11, 15};
     int target = 1239;

     pairSum(arr, target);

     return 0;
}