#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char arr[], int n)
{

     for (int i = 0; i < n; i++)
     {
          char ch = arr[i];
          if (arr[i] >= 'A' && arr[i] <= 'Z')
          {
               continue;
          }
          else
          {
               arr[i] = ch - 'a' + 'A';
          }
     }
     cout << arr;
}

int main()
{
     char arr[] = "aPpLe";

     toUpper(arr, strlen(arr));

     return 0;
}