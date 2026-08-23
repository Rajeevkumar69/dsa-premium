#include <iostream>
#include <cstring>
using namespace std;

int main()
{
     char ch = 'c';
     int position = ch - 97;
     cout << position << " \n";

     char work[] = "code";

     char work2[9] = "chamcham";

     char work3[] = {'c', 'o', 'd', 'e', '\0'};

     char work4[50] = {'c', 'o', 'd', 'e', '\0'};
     cout << work4;

     cout << strlen(work);
     return 0;
}