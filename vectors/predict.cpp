#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> vec;

     for (int i = 0; i < 5; i++)
     {
          vec.push_back(i);
     }

     cout << vec.size() << "\n";

     cout << vec.capacity() << "\n";

     return 0;
}