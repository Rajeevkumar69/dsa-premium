#include <iostream>
#include <string>
using namespace std;

class Car
{
     string name;
     string color;

public:
     Car(string name, string color)
     {
          this->name = name;
          this->color = color;
     }

     string getDetails()
     {
          return name + " " + color;
     }
};

int main()
{
     Car c1("Maruti-800", "White");

     cout << c1.getDetails();

     return 0;
}