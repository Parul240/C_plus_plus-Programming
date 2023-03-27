                                                              DISPLAYING ELEMENTS
                                                              



PROBLEM:
/*
Write a program which does the following
- Create a string array for the following values "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", and "Sunday"
- Output the last two elements of the array on separate lines
*/


SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string week[4] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  cout << week[ 5 ] << endl;
  cout << week[ 6 ];
  return 0;
}
