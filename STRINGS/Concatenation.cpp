                                                                 CONCATENATION




The '+' sign can be used between strings to add them together to make a new string.
This is called concatenation.
For eg -

string x = "Good"; 
string y = "Work";
cout < x + y;
// output will be: GoodWork


Note: You can add spaces between words by using an empty " " with a space inside or by providing a space in the end of a word.
For eg -

string x = "Good"; 
string y = "Work";
cout << x + " " + y;
// output will be: Good Work


TASK:

/*
Write a program which does the following
1. Declare two variables x and y
2. Assign the values "Hello" to variable x and "World" to variable y.
3. Output x and y to the console. Do not forget to add a space in between them.
  
Your output will be Hello World
*/

SOLUTION:

#include <bits/stdc++.h>
using namespace std;
 
int main () {
  string x = "Hello";
  string y = "World";
  cout << x + " " + y ;     //remember to include a blank space between Hello and World
  return 0;
}


OUTPUT:
Hello World
