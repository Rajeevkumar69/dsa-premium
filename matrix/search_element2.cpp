#include <iostream>
using namespace std;

bool searchPair(int mat[][3], int n, int m, int target)
{
     int i = 0, j = m - 1;

     while (i < n && j >= 0)
     {
          if (mat[i][j] == target)
          {
               return true;
          }
          else if (mat[i][j] > target)
          {
               j--;
          }
          else
          {
               i++;
          }
     }
     return false;
}

int main()
{
     int matrix[2][3] = {{1, 2, 3}, {11, 12, 19}};

     int n = 2, m = 3, key = 235;

     bool result = searchPair(matrix, n, m, key);
     cout << result;
     return 0;
}