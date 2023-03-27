                                                                 OR STATEMENT
                                                                 
 
 
 
'||' can be used to insert the 'or' condition in a c++ code.
 

                                                                  
PROBLEM:

/*
Write a program which does the following 
Take input from the console for integer variables z, x and c.
Do the above for 2 separate input tuples 
    z = 5, x = 3, c = 2
    z = 3, x = 5, c = 8
Compute and output the following for each tuple z, x and c
    "PASS" if c is greater than either x or z
    Otherwise print "FAIL" in every other case
*/

Sample 1:
Input
5 3 2
3 5 8
  
Output:
FAIL
PASS


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int z;
  int x;
  int c;
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x || c > z ) {
    cout << "PASS" << endl;
  } 
  else {
    cout << "FAIL" << endl;
  }
  
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x || c > z ) {
    cout << "PASS";
  } 
  else {
    cout << "FAIL";
  }
  return 0;
}


