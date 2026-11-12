#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// Q1: Write program to get a number from the user & print whether it's positive, negative or zero.

void printValue(int n)
{
     if (n > 0)
     {
          cout << "Positive";
     }
     else if (n < 0)
     {
          cout << "Negative";
     }
     else
     {
          cout << "Zero";
     }
}

// Q2: Write a program that takes a year from the user & print whether that year is a leap year or not.

void checkLeapYear(int year)
{
     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
     {
          cout << "Leap Year";
     }
     else
     {
          cout << "Not leap year";
     }
}

// Q3: For any 3 digit check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.

bool isArmstrong(int num)
{
     int originalNum = num;
     int temp = num;
     int digits = 0;
     int sum = 0;

     while (temp > 0)
     {
          temp /= 10;
          digits++;
     }

     temp = num;
     while (temp > 0)
     {
          int remainder = temp % 10;
          sum += round(pow(remainder, digits));
          temp /= 10;
     }

     return (sum == originalNum);
}

int main()
{
     int number;
     cout << "Enter Number: ";
     cin >> number;
     printValue(number);

     int year;
     cout << "Enter year: ";
     cin >> year;
     checkLeapYear(year);

     int a = 63, b = 36;

     bool x = a < b ? true : false;
     int y = a > b ? a : b;

     cout << x << y; // 063

     int a = 5;
     cout << ++a << "\n";
     if (++a * 5 <= 25)
     {
          cout << "hello\n";
     }
     else
     {
          cout << "bye";
     }

     int num;
     cout << "Enter an integer: ";
     cin >> num;

     if (isArmstrong(num))
     {
          cout << num << " is an Armstrong number." << endl;
     }
     else
     {
          cout << num << " is not an Armstrong number." << endl;
     }

     return 0;
}