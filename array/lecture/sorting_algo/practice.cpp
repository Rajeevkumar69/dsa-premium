#include <iostream>
#include <vector>
using namespace std;

vector<char> insertionSort(vector<char> &ch, int n)
{
     for (int i = 1; i < n; i++)
     {
          int curr = ch[i], prev = i - 1;

          while (prev >= 0 && ch[prev] > curr)
          {
               swap(ch[prev], ch[prev + 1]);
               prev--;
          }
          ch[prev + 1] = curr;
     }
     return ch;
}

int main()
{
     vector<char> arr = {'a', 'v', 'k', 'd', 'g', 'p'};

     int n = arr.size();

     vector<char> result = insertionSort(arr, n);
     for (char ch : result)
     {
          cout << ch << ",";
     }

     return 0;
}