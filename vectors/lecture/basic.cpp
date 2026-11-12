#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> v = {2, 5, 6, 4, 7};

     cout << v.size() << "\n";
     cout << v.capacity() << "\n";

     v.push_back(50);
     cout << v.size() << "\n";
     cout << v.capacity() << "\n";

     v.pop_back();
     cout << v.size() << "\n";
     cout << v.capacity() << "\n";

     for (int i = 0; i < v.size(); i++)
     {
          cout << v[i] << " ";
     }

     cout << "\n";

     for (auto val : v)
     {
          cout << val << " ";
     }

     return 0;
}