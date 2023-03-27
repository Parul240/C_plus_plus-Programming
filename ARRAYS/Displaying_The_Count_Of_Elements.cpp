                                                            DISPLAYING THE COUNT OF ELEMENTS 
                                                            


To get the size of an array, you can use the sizeof() operator:
For e.g.

          int myNumbers[5] = {10, 20, 30, 40, 50};
          cout < sizeof(myNumbers);
          Result = 20
            
Note->
* The result show 20 instead of 5, when the array contains 5 elements.
* It is because the sizeof() operator returns the size of a type in bytes
* int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes. 
            

PROBLEM:

/*
Write a program which does the following
- Create an int array containing the elements - 10, 20, 30, 40, 50, 60
- Compile and output to the console the accurate count of the number of integer elements in the given array.
*/


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int Num[6] = {10, 20, 30, 40, 50,60};
  cout << sizeof(Num) / 4;
  return 0;
}

OUTPUT: 6
