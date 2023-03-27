                                                                    IF STATEMENT





An "if statement" is written by using the 'if' keyword.

 
PROBLEM:

/*                                                                             
Write a program which does the following
- Take input for two integer variables a & b
- Output "Coding is Fun!" to the console if a is greater than b.     
*/
Input :
25
20

Output:
Coding is Fun!
  
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int a ;
  int b ;
  cin >> a;
  cin >> b;
  if ( a > b ) {
    cout << "Coding is Fun!";
  }
  return 0;
}
