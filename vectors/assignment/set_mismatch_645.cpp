#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach TC: O(n²) SC: O(1)
int main()
{

     vector<int> nums = {1, 2, 2, 4, 5};

     int n = nums.size();
     vector<int> ans;

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] == nums[j])
               {
                    ans.push_back(nums[j]);
               }
          }
     }

     for (int x = 1; x <= n; x++)
     {
          bool found = false;

          for (int i = 0; i < n; i++)
          {
               if (x == nums[i])
               {
                    found = true;
                    break;
               }
          }
          if (!found)
          {
               ans.push_back(x);
          }
     }

     for (auto val : ans)
     {
          cout << val << " ";
     }
     return 0;
}