#include <iostream>
using namespace std;

void searchSortedPair(int mat[][2], int n, int m, int target)
{
     bool found = false;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (mat[i][j] == target)
               {
                    found = true;
                    cout << i << "," << j;
               }
          }
     }
     if (!found)
     {
          cout << -1;
     }
}

int main()
{
     int matrix[3][2] = {{
                             1,
                             2,
                         },
                         {
                             3,
                             4,
                         },
                         {5, 8}};
     int n = 3, m = 2;
     int key = 5;

     searchSortedPair(matrix, n, m, key);
     return 0;
}