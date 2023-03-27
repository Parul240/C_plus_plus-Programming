                                                                  CHANGING THE ELEMENTS OF AN ARRAY




To change the value of a specific element, we can refer to the index number.
                                         

PROBLEM:

/*
Write a program which does the following
- The 3rd month in the given list is incorrect
- Update the 3rd month in the given array with the correct one - "Mar"
- Once the 3rd array element is updated, output the 3rd array element to the console
*/
                                         

SOLUTION:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string mnts[4] = {"Jan", "Feb", " Dec", "Apr"};
  mnts[ 3 ] = "Mar";
  cout << mnts[3];
  return 0;
}
