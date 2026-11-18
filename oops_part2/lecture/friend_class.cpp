/*
How we can access the private data of any class :
To make friend of another class
*/

#include <iostream>
#include <string>
using namespace std;

class A
{
private:
     string secret = "Secret Data....";
     friend class B;
};

class B
{
public:
     void getASecret(A &obj)
     {
          cout << obj.secret << endl;
     }
};

int main()
{

     A a1;
     B b1;

     b1.getASecret(a1);
     return 0;
}