                                                                    AND STATEMENT
                                                                    
 
 
 
 The && keyword is a logical operator, which is used to combine conditional statements.

PROBLEM:

/*
Write a program which does the following:
1. Declare 2 variables a and b and initialise them to the values 15 and 35 respectively
2. Compute if each of a and b is divisible by both 7 and 5
3. Depending on the result above - output the following to the console
     - The number is divisible by both 5 & 7
     - The number is not divisible by both 5 & 7    
*/

SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  a = 15;
  b = 35;
  if (a%7 == 0 && a%5 == 0 ) {
    cout << "The number is divisible by both 5 & 7" << endl;
  }  
  else {
    cout << "The number is not divisible by both 5 & 7" << endl;
  }

  if (b%7 == 0 && b%5 == 0 ) {
    cout << "The number is divisible by both 5 & 7" << endl;
  } 
  else {
    cout << "The number is not divisible by both 5 & 7" << endl;
  }
}
