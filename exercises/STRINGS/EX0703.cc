//  Example 7.3, page 189
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// MODIFIED BY ROBERTO SEBASTIANI

using namespace std;
#include <iostream>

int main()
{
  char word[80];
  do {
    cin >> word;
    cout << "\t\"" << word << "\"\n";
  } while (word[0] != '.');
  return 0;
}
