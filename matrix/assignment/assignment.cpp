#include <iostream>
using namespace std;

/*
Q1 : Print then umber of all 7’s that are in the 2d
array.
int arr[][] = {{4,7,8},{8,8,7}};
n=2, m=3
Output-2
*/

int countOccurance(int mat[][3], int n, int m, int key)
{
     int count = 0;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (mat[i][j] == key)
               {
                    count++;
               }
          }
     }
     return count;
}

int main()
{
     int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
     int n = 2, m = 3;

     int result = countOccurance(arr, n, m, 7);

     cout << result;
     return 0;
}