C++ uses the + sign for both addition and concatenation.

- Numbers are added.
- Strings are concatenated.
- We cannot mix the two


TASK:

/*
You are given a program which does the following

- You want to output 2569
- Try running the given code given in the IDE as it is - it will give a Compilation error
- Fix the error so that both the variables become strings and the output is 2569
*/
  
  
  
SOLUTION:

//We need to output 2569 using string concatenation.
//The code below is incorrect - Debug the code to solve the problem

#include <bits/stdc++.h>
using namespace std;
 
int main () {
  string num1 = "25" ;
  string num2 = "69";
  cout << num1 + num2;
  return 0;
}
