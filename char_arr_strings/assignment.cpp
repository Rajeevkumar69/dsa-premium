#include <iostream>
#include <string>
using namespace std;

/*Q1 : Count how many times lower-case vowels occurred in a String
entered by the user.
*/

void countVowels(string &str)
{
     if (str.empty())
     {
          cout << "Enter valid string";
          return;
     }
     int count = 0;
     for (char st : str)
     {
          if (st == 'a' || st == 'e' || st == 'i' || st == 'o' || st == 'u')
          {
               count++;
          }
     }
     cout << "Total Vowels: " << count;
}

int main()
{

     string str;
     cout << "Enter string: \n";
     getline(cin, str);

     countVowels(str);
     return 0;
}