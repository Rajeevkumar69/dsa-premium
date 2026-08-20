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

/*
Q2 : Print out the sum of the numbers in the second
row of the “nums” array.
int nums[][] = {{1,4,9},{11,4,3},{2,2,3}};
Output-18
*/

int returnSum(int mat[][3], int n, int m)
{
     int sum = 0;

     for (int j = 0; j < m; j++)
     {
          sum += mat[1][j];
     }

     return sum;
}

int main()
{
     int arr[3][3] = {{1, 4, 9}, {11, 4, 3}, {12, 2, 3}};
     int n = 3, m = 3;

     // int result = countOccurance(arr, n, m, 7);
     int result = returnSum(arr, n, m);

     cout << result;
     return 0;
}