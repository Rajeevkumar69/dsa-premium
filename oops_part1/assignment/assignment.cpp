
// Write the code for Hierarchial Inheritance in CPP

#include <iostream>
using namespace std;

// Parent Class
class Animal
{
public:
     void breathe()
     {
          cout << "Animal can breathe" << endl;
     }

     void eat()
     {
          cout << "Animal can eat" << endl;
     }
};

// Child Class 1
class Bird : public Animal
{
public:
     void fly()
     {
          cout << "Bird can fly" << endl;
     }
};

// Child Class 2
class Fish : public Animal
{
public:
     void swim()
     {
          cout << "Fish can swim" << endl;
     }
};

// Child Class 3
class Mammal : public Animal
{
public:
     void walk()
     {
          cout << "Mammal can walk" << endl;
     }
};

int main()
{

     Bird b1;
     Fish f1;
     Mammal m1;

     cout << "--- Bird ---" << endl;
     b1.breathe();
     b1.eat();
     b1.fly();

     cout << "\n--- Fish ---" << endl;
     f1.breathe();
     f1.eat();
     f1.swim();

     cout << "\n--- Mammal ---" << endl;
     m1.breathe();
     m1.eat();
     m1.walk();

     return 0;
}
