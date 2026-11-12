#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
     string name;
     string color;

     Car(string name, string color)
     {
          this->name = name;
          this->color = color;
     }

     // Custom Copy Constructor
     // Car(Car &original)
     // {
     //      cout << "Custom Copy Constructor" << endl;
     //      name = original.name;
     //      color = original.color;
     // }
};

int main()
{

     Car c1("Maruti-800", "White");

     Car c2(c1);

     cout << "Car Name: " << c2.name << endl;
     cout << "Car Color: " << c2.color << endl;

     return 0;
}