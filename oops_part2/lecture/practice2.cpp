// Predict the OutPut

#include <iostream>
using namespace std;

class Base
{
public:
     virtual void print()
     {
          cout << "Base\n";
     }
};

class Derived : public Base
{
public:
     void print() override // Function overriding with virtual keyword
     {
          cout << "Derived\n";
     }
};

int main()
{

     Base *b = new Derived(); // Run time polymorphism
     b->print();
     delete b;
     return 0;
}