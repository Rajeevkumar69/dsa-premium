#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
     vector<int> arr = {2, 4, 6, 8, 10, 12, 16};
     int target = 122;

     sort(arr.begin(), arr.end());
     int st = 0, end = arr.size() - 1;

     while (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (arr[mid] == target)
          {
               cout << mid;
               return 0;
          }
          else if (arr[mid] < target)
          {
               st = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     cout << -1;
     return 0;
}