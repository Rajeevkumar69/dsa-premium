#include <iostream>
#include <cmath>
using namespace std;

// Q1: WAP to calculate the Factorial of a number entered by the user.

void calculateFactorial(int num)
{
     int result = 1;

     for (int i = num; i >= 1; i--)
     {
          result *= i;
     }
     cout << result;
}

// Q2: WAP to print the multiplication table of a number,entered by the user.

void printTable(int num)
{
     for (int i = 1; i <= 10; i++)
     {
          cout << num * i << " ";
     }
}

// Q3: WAP to input a number and check whether the number is an Armstrong number or not

bool isArmstrong(int num)
{
     int original = num;
     int digits = 0;
     int sum = 0;

     int temp = num;
     while (temp)
     {
          digits++;
          temp /= 10;
     }

     temp = num;
     while (temp)
     {
          int digit = temp % 10;
          sum += pow(digit, digits);
          temp /= 10;
     }

     return sum == original;
}

// Q4: WAP that prints all the prime numbers from 2 to N.

void printPrime(int n)
{
     if (n <= 0)
     {
          cout << 0;
     }
     for (int i = 2; i < n; i++)
     {
          int j;
          for (j = 2; j < i; j++)
          {
               if (i % j == 0)
               {
                    break;
               }
          }
          if (j == i)
          {
               cout << i << " ";
          }
     }
}

// Q5 : WAP that prints the first N Fibonacci numbers.(AssumeN>=2)

void printFibonacci(int n)
{
     if (n <= 0)
          return;

     int a = 0, b = 1;
     cout << a;

     for (int i = 1; i < n; ++i)
     {
          cout << " " << b;
          int next = a + b;
          a = b;
          b = next;
     }
}

int main()
{
     calculateFactorial(5);
     cout << "\n";
     printTable(5);
     cout << "\n";
     printPrime(10);
     cout << "\n";
     printFibonacci(5);
     cout << "\n";
     return 0;
}