
#include <iostream>
#include <string>
using namespace std;

/*
Single Inheritance:- When one child class inherits the properties and functions of only one parent class, it is called Single Inheritance.
*/

class Car
{
public:
     string model;
     string mfg;
};

class Siara : public Car
{
public:
     string color;
     double price;
};

/*
Multilevel Inheritance:- When one class inherits from another class, and then a third class inherits from that second class, it is called Multilevel Inheritance.
*/

class Vehicle
{
public:
     string fuelType;
};

class Car : public Vehicle
{
public:
     string model;
     string mfg;
};

class Siara : public Car
{
public:
     string color;
     double price;
};

/*
Multiple Inheritance:- When one child class inherits properties and functions from two or more parent classes, it is called Multiple Inheritance.
*/

class Car
{
public:
     string model;
     string mfg;
};

class MusicSystem
{
public:
     string musicBrand;
     int speakers;
};

class Siara : public Car, public MusicSystem
{
public:
     string color;
     double price;
};

int main()
{

     Siara s1;

     // Parent class properties
     s1.model = "Siara-A1";
     s1.mfg = "Tata";

     // Child class properties
     s1.color = "Black";
     s1.price = 1500000;

     cout << "Model: " << s1.model << endl;
     cout << "Manufacturer: " << s1.mfg << endl;
     cout << "Color: " << s1.color << endl;
     cout << "Price: " << s1.price << endl;

     return 0;
}
