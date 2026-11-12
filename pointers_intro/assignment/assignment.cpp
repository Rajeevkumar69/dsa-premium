#include <iostream>
using namespace std;

void multiplyBy2(int &a, int &b, int &c)
{
     a *= 2;
     b *= 2;
     c *= 2;
}

int main()
{
     int x;
     int *ptr;
     x = 7;
     ptr = &x;
     cout << *ptr;

     int a = 1, b = 2, c = 3;
     multiplyBy2(a, b, c);
     cout << a << " " << b << " " << c;

     int a2 = 32;
     int *ptr2 = &a2;

     char ch = 'C';
     char &cho = ch;

     cho += a2;
     *ptr2 += ch;
     cout << a << " " << ch;
     return 0;
}