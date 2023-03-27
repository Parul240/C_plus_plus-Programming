ELSE IF STATEMENT
                                                               

The 'else if' keyword means "if the previous conditions were not true, then try this condition"

                                                                 
PROBLEM:                                                                 
/*
Write a program which does the following
1. Create integer variables b and r - the marks scored by Bob and Rob
2. Initialise b and r as b = 23 and r = 45
3. Compute and output the following to the console
    - "Rob Scored higher marks than Bob" if r is greater than b
    - "Bob & Rob both scored the same" if both b and r are equal
4. Update the values of b and r as b = 15 and r = 15
5. Compute and output the following to the console
    - "Rob Scored higher marks than Bob" if r is greater than b
    - "Bob & Rob both scored the same" if both b and r are equal
*/
                                                                 
                                                                 
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int r;
  int b;
  r = 45;
  b = 23;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if ( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  
  r = 15;
  b = 15;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if ( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  return 0;
}
