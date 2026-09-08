#include <iostream>
using namespace std;

/*
Q1:: Write a Function to clear the range of bits from i to
j in a given number.
(i & j are counted backwards from the right end of the number)

Input : num = 15, i = 1, j = 3 Output : 1
*/

void clearRangeBits(int num, int i, int j)
{
     int bitMask = (~0 << (j + 1)) | ((1 << i) - 1);

     num = num & bitMask;
     cout << num;
}

int main()
{
     clearRangeBits(121, 1, 5);
     return 0;
}