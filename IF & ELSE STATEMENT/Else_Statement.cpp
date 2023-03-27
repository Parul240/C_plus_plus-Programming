                                                                    ELSE STATEMENT




The 'else' keyword includes anything which is not included in the previous conditions.    

                                                          
PROBLEM:

/*
Write a program which does the following
* Create integer variables r and k - the weight of friends Ram and Karan
* Initialise r and k as r = 24 and k = 32
* Compute and output the following to the console
    - "Ram is heavier than Karan" if r is greater than k
    - "Karan is heavier than Ram" if r is lesser than k
    - "Ram & Karan have the same weight!" for any remaining conditions.
* Update the values of r and k as r = 78 and k = 78
* Compute and output the following to the console
    - "Ram is heavier than Karan" if r is greater than k
    - "Karan is heavier than Ram" if r is lesser than k
    - "Ram & Karan have the same weight!" for any remaining conditions.
*/   


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int r;
  int k;
  r = 24;
  k = 32;
  if (r > k) {
    cout << "Ram is heavier than Karan." << endl;
  } else if ( r < k) {
    cout << "Karan is heavier than Ram" << endl;
  }
    else {
    cout << "Ram & Karan have the same weight!" << endl;
  }
  
  r = 78;
  k = 78;
  if (r > k) {
    cout << "Ram is heavier than Karan.";
  } else if ( r < k) {
    cout << "Karan is heavier than Ram";
  }
    else {
    cout << "Ram & Karan have the same weight!";
  }
  
  return 0;
}
