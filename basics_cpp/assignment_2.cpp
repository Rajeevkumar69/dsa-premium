#include <iostream>
using namespace std;

// Q1 : In a program, input the side of a square. You have to output the area of the square.
int getSquare(int n)
{
     return n * n;
}

// Q2: Enter cost of 3 items from the user.You have to output the total cost.

double getBill(float pen, float pencil, float book)
{
     return pen + pencil + book;
}

// Q3: Build a Simple Interest Calculator.
double calculateSimpleIntrest(float p, float r, float t)
{
     return (p * r * t) / 100;
}

// Q4: Write a program to calculate the area of a circle.
float calculetArea(float radius)
{
     return 3.14 * radius * radius;
}

int main()
{
     // int side = 5;
     // int result = getSquare(side);
     // cout << result;

     // float pen = 10.5, pencil = 12.10, book = 120.50;
     // double result = getBill(pen, pencil, book);
     // cout << result;

     // float p = 123.1, r = 4.5, t = 10.3;
     // double result = calculateSimpleIntrest(p, r, t);
     // cout << result;

     float r = 32.0;
     double result = calculetArea(r);
     cout << result;

     return 0;
}