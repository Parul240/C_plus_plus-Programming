                                                             CONDITIONS IN IF STATEMENTS






C++ supports the usual logical mathematical conditions:

* Equals: a == b
* Not Equals: a != b
* Less than: a < b
* Less than or equal to: a <= b
* Greater than: a > b
* Greater than or equal to: a >= b


PROBLEM:

/*
Write a program which does the following
* Take input from the console for integer variables a, b and c.
* Do the above for 2 separate input tuples
    - a = 25, b = 21, c = 52
    - a = 34, b = 23, c = 34
* Compute and output the following for each tuple a, b and c
    - "Bravo!" if a is greater or equal to c
    - Otherwise print "Try again" in every other case    
*/  

Sample 1:
25 21 52
35 23 34
  
Output:
Try Again
Bravo!
  
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin >> a;
  cin >> b;
  cin >> c;
  if (a > c) {
    cout << "Bravo!" << endl;
  } 
  else {
    cout << "Try Again" << endl;
  }

  cin >> a;
  cin >> b;
  cin >> c;
  if (a > c) {
    cout << "Bravo!";
  } 
  else {
    cout << "Try Again";
  }
  return 0;
}
