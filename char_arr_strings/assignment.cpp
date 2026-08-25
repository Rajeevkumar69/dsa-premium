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

/*
Q2 : You're given two strings s1 & s2 of equal length.
A string swap is an operation where you choose two indices in a string
(not necessarily different) & swap the characters at these indices.
Return true if it is possible to make both strings equal by performing atmost
one string swap on exactly one of the strings.
Otherwise, return false.

:s1= "bank", s2= "kanb"
:true
swap the first character with the last character of s2 to make "bank".
*/

bool compareString(string s1, string s2)
{
     if (s1.empty() || s2.empty())
     {
          return false;
     }

     if (s1 == s2)
     {
          return true;
     }

     for (int i = 0; i < s1.length(); i++)
     {
          for (int j = i + 1; j < s1.length(); j++)
          {
               swap(s1[i], s1[j]);

               if (s1 == s2)
               {
                    return true;
               }
               swap(s1[i], s1[j]);
          }
     }
     return false;
}

int main()
{

     string str;
     cout << "Enter string: \n";
     getline(cin, str);

     countVowels(str);
     bool result = compareString("Pen", "ePn");
     cout << result;
     return 0;
}