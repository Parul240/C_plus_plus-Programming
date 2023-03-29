                                                BREAK STATEMENT




* It is used to "jump out" of a switch statement.
* The 'break' statement can also be used to jump out of a loop.
  
  
* SYNTAX
     +----------+
     |  break;  |
     +----------+
       
       
* Basically, break statements are used in situations when we are not sure about the actual number of iterations for the loop or we want to terminate the loop based on some condition.

  
PROGRAM:

/*
Write a program which does the following

- Initialise an integer variable i to 0
- Output to the console i from 0 to 15 using a for loop
    Stop execution when the value of i reaches 13
*/
  
  
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 15 ; i = i+1) {
    if (i == 13 ) {
      break ;
    }
    cout << i << endl;
  } 
  return 0;
}



OUTPUT:
0
1
2
3
4
5
6
7
8
9
10
11
12
