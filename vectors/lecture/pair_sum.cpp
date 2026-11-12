#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> &nums, int target)
{
     int n = nums.size();
     bool found = false;

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {

               if (nums[i] + nums[j] == target)
               {
                    cout << i + 1 << "," << j + 1;
                    found = true;
               }
          }
     }
     if (!found)
     {
          cout << -1 << -1;
     }
}

int main()
{
     vector<int> arr = {2, 7, 11, 15};
     int target = 129;

     pairSum(arr, target);

     return 0;
}