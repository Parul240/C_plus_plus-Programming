You have already learned that cout is used to output (print) values.
Now we will use cin to get user input.

cin is a predefined variable that reads data from the keyboard with the extraction operator > >.

cout is pronounced "see-out". Used for output, and uses the insertion operator (< <)
cin is pronounced "see-in". Used for input, and uses the extraction operator (> >)

  
  
PROBLEM:

Write a program which does the following

- Declare an integer variable a
- Try taking a number from the console and assign it to a
- Output a to the console

Sample 1:
Input
76

Output
Your number is: 76
  
  

SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a; 
  cout << "Your number is: " << a;
  return 0;
}
