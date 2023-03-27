                                                                      1. IF & ELSE STATEMENT
                                                                      

'if' and 'else' can be used together to create conditions.
It returns 1 if the condition is true and 0 if the condition is false.
There are multiple operators which can be used in conditional statements.

- Equal to '=='
- Not Equal '!='
- Greater than '>'
- Less than '<'
- Greater than or equal to '>='
- Less than or equal to '<='
  
  
  
PROGRAM:

/*
Write a program which does the following

- Let's think of a "real-life example" where we need to find out if a person is old enough to vote.
- Find out if the age (25) is greater than OR equal to the voting age limit, which is set to 18.
- Declare the variables age and vage - and initialise them to the values 25 and 18 - i.e. the age and the voting age respectively.
- Compare age and vage using the syntax given above and output the following
    * "Old enough to vote!" if age is greater than or equal to vage
    * "Not old enough to vote." if age is lesser than vage
*/


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int Age = 25 ;
  int Vage = 18;

  if (Age >= Vage) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }
  return 0;
}


                                                                           2. IF STATEMENT
                                                                           
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




                                                               3. ELSE IF STATEMENT
                                                               

The 'else if' keyword means "if the previous conditions were not true, then try this condition"

                                                                 
PROBLEM:                                                                 
/*
Write a program which does the following

1. Create integer variables b and r - the marks scored by Bob and Rob
2. Initialise b and r as b = 23 and r = 45
3. Compute and output the following to the console
    - "Rob Scored higher marks than Bob" if r is greater than b
    - "Bob & Rob both scored the same" if both b and r are equal
4. Update the values of b and r as b = 15 and r = 15
5. Compute and output the following to the console
    - "Rob Scored higher marks than Bob" if r is greater than b
    - "Bob & Rob both scored the same" if both b and r are equal
*/
                                                                 
                                                                 
SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int r;
  int b;
  r = 45;
  b = 23;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if ( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  
  r = 15;
  b = 15;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob." << endl;
  } else if ( r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
  return 0;
}


                                                          
                                                        4. ELSE STATEMENT
                                                        
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



                                                        4. CONDITIONS IN IF STATEMENTS
                                                        
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


                                                              5. AND STATEMENT
                                                              
                                                              
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



                                                                6. OR STATEMENT
                                                                
                                                                
'||' can be used to insert the 'or' condition in a c++ code.
 

                                                                  
PROBLEM:

/*
Write a program which does the following 
Take input from the console for integer variables z, x and c.
Do the above for 2 separate input tuples 
    z = 5, x = 3, c = 2
    z = 3, x = 5, c = 8
Compute and output the following for each tuple z, x and c
    "PASS" if c is greater than either x or z
    Otherwise print "FAIL" in every other case
*/

Sample 1:
Input
5 3 2
3 5 8
  
Output:
FAIL
PASS


SOLUTION:

#include <iostream>
using namespace std;

int main() {
  int z;
  int x;
  int c;
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x || c > z ) {
    cout << "PASS" << endl;
  } 
  else {
    cout << "FAIL" << endl;
  }
  
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x || c > z ) {
    cout << "PASS";
  } 
  else {
    cout << "FAIL";
  }
  return 0;
}






                                                                
