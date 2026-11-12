/*
A dangling pointer is a pointer that refers to a memory location that is no longer valid. Dereferencing such a pointer results in undefined behavior, which may lead to crashes, incorrect output, or memory corruption.
*/

#include <iostream>
using namespace std;

int main()
{
     int *ptr = new int(20);

     delete ptr;

     cout << *ptr;

     return 0;
}