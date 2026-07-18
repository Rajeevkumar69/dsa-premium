#include <iostream>
using namespace std;

// Q1: What’ll be the output of the following programs:

// int main()
// {
//      int x = 2, y = 5;

//      int exp1 = (x * y / 5);
//      int exp2 = (x * (y / 5));

//      cout << exp1 << "\n"; // 2
//      cout << exp2;         // 2
//      return 0;
// }

// int main()
// {
//      int x = 10, y = 5;
//      int exp1 = (y * (x / y + x / y));
//      int exp2 = (y * x / y + y * x / y);

//      cout << exp1 << "\n"; // 20
//      cout << exp2;         // 20
//      return 0;
// }

// int main()
// {
//      int x = 200, y = 50, z = 100;

//      if (x > y && y > z)
//      {
//           cout << "hello \n";
//      }

//      if (z > y && z < x)
//      {
//           cout << "c++ \n";
//      }

//      if ((y + 200) < x && (y + 150) < z)
//      {
//           cout << "Hello C++ \n";
//      }

//      // c++
//      return 0;
// }

// Q2: Read up about Operator Precedence.

/*
When multiple operators are used in a single statement,
it is operator precedence which decides which operation is
performed first & soon.
(Similar to the rule of **BODMAS** used in math)
*/

/*
Operator Precedence (Higher → Lower)

| Operator               | Description
| ---------------------- | ------------------------------------------------------------------------
| `()` `[]`              | Operators within parentheses are performed first
| `++`, `--`             | Postfix increment / decrement
| `++`, `--`             | Prefix increment / decrement
| `*`, `/`, `%`          | Multiplication, Division, Modulus
| `+`, `-`               | Addition, Subtraction
| `<`, `<=`, `>`, `>=`   | Less than, Less than or equal to, Greater than, Greater than or equal to
| `==`, `!=`             | Equal to, Not equal to
| `&&`                   | Logical AND
| `?:`                   | Conditional Operator
| `=`                    | Simple Assignment
| `+=`, `-=`, `*=`, `/=` | Shorthand operators
| `,`                    | Comma operator

*/