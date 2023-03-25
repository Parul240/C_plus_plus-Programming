- We can use the 'switch' statement to select one of many code blocks to be executed.
- We can use the 'break' statement to end the execution of code at a specific point.


The Syntax is as follows

switch(expression) {
case x:
  // code 
break;
case y:
  // code 
break;
default:
   // code 
}


* The switch expression is evaluated once and the value of the expression is compared with the values of each case. If there is a match, the associated block of code is executed.
* When C++ reaches a break keyword, it breaks out of the switch block. This will stop the execution of more code and case testing inside the block.
* The default keyword specifies some code to run if there is no case match.


PROBLEM:

/*
Write a program which does the following

Take input from the user with value between 1 and 7
Compute and output to the console the day associated with that number.
*/

Sample 1:  
