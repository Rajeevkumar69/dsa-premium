#include <iostream>
using namespace std;

int main()
{
     int arr[] = {10, 20, 30, 50, 120};

     int n = sizeof(arr) / sizeof(int);

     cout << "Size of array is: " << n;
     return 0;
}