// Function Overloading In CPP
#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
     void show(int x)
     {
          cout << "Integer: " << x << endl;
     }
     void show(string str)
     {
          cout << "String: " << str << endl;
     }
};

int main()
{
     Print p1;

     p1.show(25);
     p1.show("Hello World!");

     return 0;
}