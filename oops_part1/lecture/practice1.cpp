#include <iostream>
#include <string>
using namespace std;

class User
{
private:
     string id;
     string password;

public:
     // string id;
     string userName;

     User(string id)
     {
          this->id = id;
     }

     string getPassword()
     {
          return password;
     }

     void setPassword(string password)
     {
          this->password = password;
     }
};

int main()
{
     User u1("101");
     u1.userName = "Rajeev Kumar";
     u1.setPassword("abcd");

     // cout << "User ID: " << u1.id << endl;
     cout << "User Name: " << u1.userName << endl;
     cout << "Password: " << u1.getPassword() << endl;

     return 0;
}