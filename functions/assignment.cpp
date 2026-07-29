#include <iostream>
#include <math.h>
using namespace std;

bool checkPalindrome(int num)
{
     int original = num;
     int rev = 0;

     while (num != 0)
     {
          int digit = num % 10;
          rev = rev * 10 + digit;
          num /= 10;
     }

     return rev == original;
}

int calculateSumOfDigits(int num)
{
     int count = 0;
     while (num != 0)
     {
          int lastDigit = num % 10;
          num = num / 10;
          count += lastDigit;
     }
     return count;
}

int calculateSquare(int a, int b)
{
     // a^2+b^2+2*ab.
     return (a * 2) + (b * 2) + (2 * a * b);
}

void printLargestOfThreeNumbers(int a, int b, int c)
{
     if (a >= b && a >= c)
     {
          cout << a;
     }
     else if (b >= a && b >= c)
     {
          cout << b;
     }
     else
     {
          cout << c;
     }
}

char getNextCharacter(char ch)
{
     if (ch == 'z')
     {
          return 'a';
     }

     if (ch == 'Z')
     {
          return 'A';
     }

     return ch + 1;
}

int main()
{

     int num = 13120;
     cout << checkPalindrome(num);
     cout << calculateSumOfDigits(num);
     cout << calculateSquare(2, 3);
     printLargestOfThreeNumbers(10, 20, 4);
     cout << getNextCharacter('Z');
     return 0;
}