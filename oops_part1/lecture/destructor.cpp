#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
     string carModel;
     string color;

     Car(string carModel, string color)
     {
          this->carModel = carModel;
          this->color = color;
     }

     ~Car()
     {
          cout << "Destructor Invocked";
     }
};

int main()
{

     Car c1("Maruti-800", "White");

     cout << "Model: " << c1.carModel << endl;
     cout << "Color: " << c1.color << endl;

     return 0;
}